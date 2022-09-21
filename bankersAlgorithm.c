#include <stdio.h>
#include <stdbool.h>
// function to read allocatuion and max need of resources for processes
void readProcess(int n, int allocation[][3], int max[][3])
{
    for (int i = 0; i < n; i++)
    {
        printf("enter allocationn of resources A of process %d\n", i + 1);
        scanf("%d", &allocation[i][0]);
        printf("enter maximum need of resources A of process %d\n", i + 1);
        scanf("%d", &max[i][0]);
        printf("enter allocationn of resources B of process %d\n", i + 1);
        scanf("%d", &allocation[i][1]);
        printf("enter maximum need of resources B of process %d\n", i + 1);
        scanf("%d", &max[i][1]);
        printf("enter allocationn of resources C of process %d\n", i + 1);
        scanf("%d", &allocation[i][2]);
        printf("enter maximum need of resources C of process %d\n", i + 1);
        scanf("%d", &max[i][2]);
    }
}
// function to calculate available and need of each process
void calculateAvailableAndNeed(int n, int m, int available[3], int allocation[][3], int max[][3], int need[][3])
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            available[i] = available[i] - allocation[j][i];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }
}
// function to simulate allocation and check safety and to print the outout
void safetyAlgorithm(int n, int m, int available[], int need[][3], int allocation[][3])
{
    bool flag = false, flag1 = true;
    int work[m], i, j, k, safeSequence[n], count = 0;
    bool finish[n];
    for (i = 0; i < m; i++)
    {
        work[i] = available[i];
    }
    for (i = 0; i < n; i++)
    {
        finish[i] = false;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (finish[j] == false)
            {
                for (k = 0; k < m; k++)
                {
                    if (need[j][k] > work[k])
                    {
                        flag1 = false;
                        break;
                    }
                    else
                        flag1 = true;
                }
                if (flag1 == true)
                {
                    for (k = 0; k < m; k++)
                    {
                        work[k] = work[k] + allocation[j][k];
                    }
                    finish[j] = true;
                    safeSequence[count] = j;
                    count++;
                }
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (finish[i] == true)
            flag = true;
        else
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        printf("System is in safe state\n");
        printf("Safe Sequence is \n");
        for (i = 0; i < n; i++)
            printf("P%d -> ", safeSequence[i] + 1);
        printf("\n");
    }
    else
        printf("System is not in safe state\n");
}
void main()
{
    int n, m = 3;
    printf("enter number of processes\n");
    scanf("%d", &n);
    int available[3] = {10, 5, 7};
    int allocation[n][m];
    int max[n][m];
    int need[n][m];
    readProcess(n, allocation, max);
    calculateAvailableAndNeed(n, m, available, allocation, max, need);
    safetyAlgorithm(n, m, available, need, allocation);
}