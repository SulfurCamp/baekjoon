#include <stdio.h>
int main(){
    int year;
    int count = 0;
    
    scanf("%d", &year);
    
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        count = 1;
    }
    else
        count = 0;
    
    printf("%d", count);
    
    return 0;
}