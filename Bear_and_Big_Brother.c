/*
* /Task Name : Bear and Big Brother
* Task Link : https://codeforces.com/contest/791/problem/A
* Contributer : Ahemd Mamdouh & Eslam Owaida
* Date : 10/5/2024   
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,counter=0;
    scanf("%d %d",&a,&b);
    while(a<=b)
    {
        a*=3;
        b*=2;
        counter++;
    }
    printf("%d\n",counter);
    return 0;
}