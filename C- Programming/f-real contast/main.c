#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T); // Number of test cases

    for (int caseNum = 1; caseNum <= T; caseNum++)
    {
        int N;
        scanf("%d", &N); // Size of the list

        int numbers[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &numbers[i]); // Numbers in the list
        }

        int S;
        scanf("%d", &S); // Number to find

        int found = 0;
        int position = -1;

        for (int i = 0; i < N; i++)
        {
            if (numbers[i] == S)
            {
                found = 1;
                position = i + 1; // Array index starts from 0, so adding 1 to position
                break;
            }
        }

        if (found)
        {
            printf("Case %d: %d\n", caseNum, position);
        }
        else
        {
            printf("Case %d: Not Found\n", caseNum);
        }
    }

    return 0;
}