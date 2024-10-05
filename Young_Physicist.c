/*
* /Task Name : Young Physicist
* Task Link : https://codeforces.com/contest/69/problem/A
* Contributer : Ahemd Mamdouh & Eslam Owaida
* Date : 10/5/2024   
*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n=0;
    scanf("%d",&n);
    int Tx=0,Ty=0,Tz=0 ,x,y,z;

    for(int i=0 ;i<n ;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        Tx+=x;
        Ty+=y;
        Tz+=z;
    }
    if(Tx==0&&Ty==0&&Tz==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}