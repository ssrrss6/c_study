#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void hashInit(int* hash, int size)
{
    for (int i = 0; i < size; i++)
    {
        hash[i] = 0;
    }
}
int lengthOfLongestSubstring(char* s) {
    int len = 0;
    int count = 0;
    int hash[127];

    hashInit(hash, sizeof(hash) / sizeof(hash[0]));
    char* tmps = s;

    while (*s)
    {
        if (hash[*tmps] || *tmps == '\0')
        {
            tmps = ++s;
            hashInit(hash, sizeof(hash) / sizeof(hash[0]));
            if (count >= len)
            {
                len = count;
            }
            count = 0;
            continue;
        }
        else
        {
            hash[*tmps] = 1;
            count++;
            tmps++;
        }
    }

    return len;
}

int main()
{
	char s[] = { "pwwkew" };

    int ret = lengthOfLongestSubstring(s);

    printf("%d\n", ret);

	return 0;
}