#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int factorial(int i)
//{
//	int sum = 1;
//	for (int j = 1; j <= i; j++)
//	{
//		sum *= j;
//	}
//	return sum;
//}
//
//int main()
//{
//	//打印杨辉三角
//
//	int n = 0;
//	scanf("%d", &n);
//	
//
//	for (int i = 0; i < n; i++)
//	{
//		int num = factorial(i);
//		for (int j = 0; j <= i; j++)
//		{
//			int num_1 = factorial(j);
//			int num_2 = factorial(i - j);
//			printf("%d ", num / (num_1 * num_2));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	/*日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//
//	以下为4个嫌疑犯的供词:
//
//	A说：不是我。
//
//	B说：是C。
//
//	C说：是D。
//
//	D说：C在胡说
//
//	已知3个人说了真话，1个人说的是假话。
//	现在请根据这些信息，写一个程序来确定到底谁是凶手。*/
//
//	int killer = 0;
//	//分别假设凶手是a,b,c,d,看谁是凶手时满足3个人说了真话，一个人说了假话
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("凶手是：%c", killer);
//	}
//
//
//	return 0;
//}

int checkData(int* p)
{
	int tmp[7] = { 0 }; //标记表，实际是哈希表的思路。一开始每个元素都是0。

	int i;
	for (i = 0; i < 5; i++)
	{
		if (tmp[p[i]]) //如果这个位置的标记已经是1，则代表重复，直接返回0。
		{
			return 0;
		}
		tmp[p[i]] = 1; //如果不是，则给这个位置标记为1。
	}
	return 1; //全部标记完毕也没有出现重复的情况，代表OK。
}

void swapArgs(int* a, int* b) //交换函数
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void diveRank(int* p, int n)
{
	if (n >= 5) //此时的n也是用来控制循环层数的。
	{
		if ((p[1] == 2) + (p[0] == 3) == 1 && //B第二，我第三
			(p[1] == 2) + (p[4] == 4) == 1 && //我第二，E第四
			(p[2] == 1) + (p[3] == 2) == 1 && //我第一，D第二
			(p[2] == 5) + (p[3] == 3) == 1 && //C最后，我第三
			(p[4] == 4) + (p[0] == 1) == 1)   //我第四，A第一
			//由于此时是执行的全排列，所以查重也省了。
		{
			for (int i = 0; i < 5; i++)
			{
				printf("%d ", p[i]);
			}
			putchar('\n');
		}
		return;
	}

	int i;
	for (i = n; i < 5; i++) 
		//这个递归方式就完成了对1~5的全排列，方法是从后向前不停的执行交换。
	{
		swapArgs(p + i, p + n);
		diveRank(p, n + 1);
		swapArgs(p + i, p + n);
	}
}
int main()
{
	//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：

	//	A选手说：B第二，我第三；

	//	B选手说：我第二，E第四；

	//	C选手说：我第一，D第二；

	//	D选手说：C最后，我第三；

	//	E选手说：我第四，A第一；

	//	比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。


	int p[5] = { 1, 2, 3, 4, 5 }; //当然由于是全排列，所以初值必须给好。

	diveRank(p, 0);

	return 0;

	return 0;
}