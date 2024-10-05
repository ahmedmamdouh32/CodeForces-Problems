/*
* /Task Name : Football
* Task Link : https://codeforces.com/contest/96/problem/A
* Contributer : Ahemd Mamdouh & Eslam Owaida
* Date : 10/5/2024   
*/



#include <stdio.h>

int main() {
    // Write C code here
char arr[100];


scanf("%s", &arr);  //user input

int counter = 0;
char previous_value =arr[0];
char current_value;
int i=1;

while(arr[i] != '\0'){
    
    current_value = arr[i];
    if(current_value == previous_value){
        counter++;
        if(counter >=6){
            printf("YES");
            return 0;
        }
    }
    else{
        counter = 0;
    }
    i++;
    previous_value = current_value;
}
printf("NO");
    return 0;
}