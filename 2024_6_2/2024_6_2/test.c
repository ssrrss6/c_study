#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define GETK1(n, m) ((n) / 2 > (m) ? (m) : (n) / 2)
#define GETK2(n, m) ((n) / 2 > (m) ? (m) : (n) / 2)

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {

    int* p1 = nums1;
    int* p2 = nums2;
    int Size1 = nums1Size;
    int Size2 = nums2Size;

    int k = (nums1Size + nums2Size) / 2;
    if ((nums1Size + nums2Size) % 2)
        k += 1;

    int k1 = GETK1(k, Size1);
    int k2 = GETK2(k, Size2);
    while (k > 1)
    {
        if (p1[k1 - 1] < p2[k2 - 1])
        {
            p1 += k1;
            k -= k1;
            Size1 -= k1;
            k1 = GETK1(k, Size1);
        }
        else
        {
            p2 += k2;
            k -= k2;
            Size2 -= k2;
            k2 = GETK2(k, Size2);
        }
        if (Size1 == 0 || Size2 == 0)
            break;
    }

    double ret = 0;
    if ((nums1Size + nums2Size) % 2)
    {
        if (Size1 && Size2)
            ret = p1[k - 1] < p2[k - 1] ? p1[k - 1] : p2[k - 1];
        else if (Size1)
            ret = p1[k - 1];
        else
            ret = p2[k - 1];
    }
    else
    {
        for (int i = 0; i < 2; i++)
        {
            if (Size1 && Size2)
            {
                ret += p1[k - 1] < p2[k - 1] ? p1[k - 1] : p2[k - 20];
                if (p1[k - 1] < p2[k - 1])
                {
                    p1 += k;
                    Size1 -= k;
                }
                else
                {
                    p2 += k;
                    Size2 -= k;
                }
            }
            else if (Size1)
            {
                ret += p1[k - 1];
            }
            else
            {
                ret += p2[k - 1];
            }
        }
        ret /= 2;
    }

    return ret;
}
int main()
{
	int nums1[] = {1, 3};
	int nums2[] = {2};
	int sz1 = sizeof(nums1) / sizeof(nums1[0]);
	int sz2 = sizeof(nums2) / sizeof(nums2[0]);

    double ret = findMedianSortedArrays(nums1, sz1, nums2, sz2);
    printf("%lf\n", ret);

	return 0;
}