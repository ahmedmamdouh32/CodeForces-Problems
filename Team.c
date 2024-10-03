/*
* /Task Name : Team
* Task Link : https://codeforces.com/contest/231/problem/A
* Contributer : Ahemd Mamdouh
* Date : 10/3/2024   
*/


#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 
int n;
scanf("%d",&n);
 
int petya,Vasya,Tonya;
int SolvedProblems = 0;
 
for(int i = 0 ; i < n ; i++){
    scanf("%d",&petya);
    scanf("%d",&Vasya);
    scanf("%d",&Tonya);
 
    if(petya + Vasya + Tonya >1){
        SolvedProblems++;
    }
}
 
printf("%d",SolvedProblems);
 
    return 0;
}