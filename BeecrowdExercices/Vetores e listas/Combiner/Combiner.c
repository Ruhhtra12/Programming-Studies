#include <stdio.h>
#include <string.h>
int main()
{
    int i,N;
    scanf("%d",&N);
    char arrayOfStrings[N][51];
    for (i = 0; i < N; i++)
    {
        int II;
        char temp[2][51];
        char result[51];
        II = 0;
        scanf(" %s",&arrayOfStrings[i]);
        char *token = strtok(arrayOfStrings[i], " ");
        while (token != NULL)
        {
            strcpy(temp[II],token);
            token = strtok(NULL, " ");
            II++;
        }
        strcat(result,temp[0][0]);
        strcat(result,temp[1][0]);
        for (II = 0; II < ; II++)
        {
            /* code */
        }
        

        printf("%s\n", result);
    }
    
    return 0;
}
