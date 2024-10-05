/*
* /Task Name : Nearly Lucky Number
* Task Link : https://codeforces.com/contest/110/problem/A
* Contributer : Ahemd Mamdouh & Eslam Owaida
* Date : 10/5/2024   
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int n=0;
    int n2,counter=0;
    scanf("%llu",&n);

    while(n>0)
    {
        n2=n%10;
        if(n2==7||n2==4)
        {
            counter++;
        }
        n/=10;
    }
    if(counter==4||counter==7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}