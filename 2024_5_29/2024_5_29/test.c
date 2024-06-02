#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int similarPairs(char** words, int wordsSize) {
    int count = 0;
    for (int i = 0; i < wordsSize; i++)
    {
        for (int j = i + 1; j < wordsSize; j++)
        {
            int numi = 0;
            int numj = 0;
            int flag = 0;
            while (*(words[i] + numi) != '\0')
            {
                while (*(words[j] + numj) != '\0')
                {
                    if ((*(words[i] + numi) - *(words[j] + numj++)) == 0)
                    {
                        flag = 1;
                        break;
                    }
                    flag = 0;
                }
                numi++;
                numj = 0;
            }
            if (flag)
                count++;
        }
    }

    return count;
}
int main()
{
	char* words[] = { "aba","aabb","abcd","bac","aabc" };

	int sz = sizeof(words) / sizeof(words[0]);

    similarPairs(words, sz);

	return 0;
}