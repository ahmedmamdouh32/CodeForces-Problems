/*
* /Task Name : Watermelon
* Task Link : https://codeforces.com/contest/4/problem/A
* Contributer : Ahemd Mamdouh
* Date : 10/3/2024   
*/


#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 
int w; //watermelon weight
 
scanf("%d",&w);
if(w == 2){
    printf("NO");
    return 0;
}
 
if(w % 2 ==0)
{
    printf("YES");
}
else{
    printf("NO");
}
    return 0;
}