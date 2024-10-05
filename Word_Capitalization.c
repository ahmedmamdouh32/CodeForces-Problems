/*
* /Task Name : Word Capitalization
* Task Link : https://codeforces.com/contest/281/problem/A
* Contributer : Ahemd Mamdouh & Eslam Owaida
* Date : 10/5/2024   
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[1000];
    scanf("%s",arr);
    if (arr[0]>96)
    {
        arr[0]-=32;
    }
    printf("%s",arr);
    return 0;
}