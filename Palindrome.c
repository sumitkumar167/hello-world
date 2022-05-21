//Program to check whether the number is palindrome

int Palindrome(int number){
  int temp = 0, sum = 0, rem = 0;
  int flag = 0;
  temp = number;
  while(number > 0){
    rem = number%10;
    sum = sum*10 + rem;
    number /= 10;
    }
  if(temp==sum)
    flag = 1;
  return flag;
  }

int main() {
  
  int isPalindrome;
  isPalindrome = Palindrome(1234);
  if(isPalindrome == 1)
    printf("Its Palindrome");
  else
    printf("Better Luck Next Time!!!");
  return 0;
}