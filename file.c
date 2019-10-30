//Program to check whether the number is palindrome

#include<stdio.h>  
int main()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
printf("palindrome number ");    // The number is a palindrome
else    
printf("not palindrome");        // The number is not a palindrome
return 0;  
}   
