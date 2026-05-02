
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);
//     printf("%d", n%8);
// }
// #include <math.h>
// void checkArmstrong(int*n){
//     int temp=*n, temp_two=*n, sum=0, digits=0;
//     while(temp>0){
//         digits++;
//         temp/=10;
//     }
//     while(temp_two>0){
//         int rem=temp_two%10;
//         sum=sum+pow(rem, digits);
//         temp_two/=10;
//     }
//     if(sum==*n){
//         printf("Armstrong number");
//     }
//     else{
//         printf("Not an number");
//     }
// }
// int isPrime(int n){
//     int count=0;
//     for(int i=1; i<=n; i++){
//         if (n%i==0){
//             count++;
//         }
//     }
//     if(count==2){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int OddMultiply(){
//     int N, product=1;
//     scanf("%d", &N);
//     for(int i=1; i<=N; i++){
//         if(i%2!=0){
//             product*=i;
//         }
//     }
//     return product;
// }
//sum of odd valued terms of fibonacci series
// int fib(int n);   // function prototype
// int main()
// {
//     int n, i, sum = 0, term;
//     scanf("%d", &n);
//     for(i = 0; i < n; i++)
//     {
//         term = fib(i);
//         printf("%d ", term);

//         if(term % 2 != 0)   // check odd
//             sum += term;
//     }
//     printf("\nSum of odd valued terms: %d", sum);
//     return 0;
// }
// int fib(int n)
// {
//     if(n == 0)
//         return 0;
//     else if(n == 1)
//         return 1;
//     else
//         return fib(n-1) + fib(n-2);
// }
//countWays to find distict ways of climbing 
// int countWays(int n){
//     if(n==0||n==1)
//         return 1;
//     else
//         return countWays(n-1)+(countWays(n-2));
// }
// int main(){
//     int n;
//     scanf("%d", &n);
//     printf("Total ways: %d", countWays(n));
//     return 0;
// }
//n terms of fibonacci series using recursion
// int fib(int n){
//     if(n==0)
//         return 0;
//     else if(n==1)
//         return 1;
//     else
//         return fib(n-1)+fib(n-2);
// }
// int main(){
//     int n, i;
//     scanf("%d", &n);
//     for(i=0; i<n; i++)
//     {
//         printf("%d", fib(i));
//     }
//     return 0;
// }




