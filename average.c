//Averages an arbitrary amount of numbers
//Christian Ng
#include <stdio.h>
#include <math.h>

long double sumofterms, counter;
    
char check[9999] = "blar";
counter = 0;
sumofterms = 0;
int shouldcontinue = 0;

while (shouldcontinue != 1) {
    printf("Enter a number\n");
    scanf("&c", &*check);
    if(isnum(check)){
        sumofterms += strtod(check, NULL);
        counter++;
    }
    else{
        shouldcontinue = 1;
    }
    
}
printf(sumofterms/counter);
