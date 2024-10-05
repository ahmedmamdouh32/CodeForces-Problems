/*
* /Task Name : Soldier and Bananas
* Task Link : https://codeforces.com/contest/546/problem/A
* Contributer : Ahemd Mamdouh & Eslam Owaida
* Date : 10/5/2024   
*/



#include <stdio.h>
#include <stdlib.h>



int main()
{
    int k,n,w,t=0,res=0;
    scanf("%d %d %d",&k,&n,&w);
    for(int i=1;i<=w;i++)
    {
        t+=k*i;
    }
    if(t>n)
    {
        res=t-n;
    }
    printf("%d",res);
    return 0;
}