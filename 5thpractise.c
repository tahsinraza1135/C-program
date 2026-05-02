#include<stdio.h>

// int main(){
//     int R, C;
//     scanf("%d %d", &R, &C);
//     int arr[R][C];
//     for(int i=0; i<R; i++){
//         for(int j=0; j<C; j++){
//             scanf("%d", &arr[i][j]);
//         }
//         printf("\n");
//     }
//     scanf("%d", &N);
//     for(int i=0; i<R; i++){
//         for(int j=0; j<R; i-1; j++){
//             if(arr[j][N]>arr[j+1][N]);
//             temp=arr[j][N]
//         }
//     }
// }
// int main(){
//     int m, n, p, q, i, j, k;
//     printf("Enter no. of rows of matrix A: ");
//     scanf("%d", &m);
//     printf("\nEnter no. of columns of matrix A:");
//     scanf("%d", &n);
//     int A[m][n];
//     printf("\nEnter no. of rows of matrix  b:");
//     scanf("%d", &p);
//     printf("\nEnter no. of column of matrix B: ");
//     scanf("%d", &q);
//     int B[p][q];
//     int C[m][q];
//     if(n != p){
//         printf("\nMatrix multiplication is not possibrle");
//         return 0;
//     }
//     printf("\nEnter elements in matrix A:\n");
//     for(i=0; i<m; i++){
//         for(j=0; j<n; j++){
//             scanf("%d", &A[i][j]);
//         }
//     }
//     printf("\nEnter elements in matrix B:\n");
//     for(i=0; i<p; i++){
//         for(j=0; j<q; j++){
//             scanf("%d", &A[i][j]);
//         }
//     }
//     for(i=0; i<m; i++){
//         for(j=0; j<q; j++){
//             C[i][j]=0;
//         }
//     }
//     for(i=0; i<m; i++){
//         for(j=0; j<q; j++){
//             for(k=0; k<n; k++){
//                 C[i][j]=C[i][j]+A[i][k]*B[k][j];
//             }
//         }
//     }
//     printf("\nMatrix C is: \n");
//     for(i=0; i<m; i++){
//         for(j=0; j<q; j++){
//             printf("%d", C[i][j]);
//         }
//         printf(" \n");

//     }
//     return 0;
// }
// int main(){
//     int mat[4][3];
//     int totalEmp, totalProd;
//     printf("Enter sales for 4 emps and 3 prods:\n");
//     for(int i=0; i<4; i++){
//         printf("Emlployee %d:\n", i);
//         for(int j=0; j<3; j++){
//             printf("Product %d: ", j);
//             for(int j=0; j<3; j++){
//                 printf("Product %d: ", j);
//                 scanf("%d", &mat[i][j]);
//             }
//         }
//         printf("\nTotal sales by each employees:\n");
//         for(int i=0; i<4; i++){
//             totalEmp=0;
//             for(int j=0; j<3; j++){
//                 totalProd=0;
//                 for(int i=0; i<4; i++){
//                     totalProd += mat[i][j];
//                 }
//                 printf("Product %d = %d\n", j, totalProd);
//             }
//         }
//     }

//}
// int main() {
//     char answerKey[10];
//     char studentAns[10];
//     int correct = 0;
//     // Input answer key
//     printf("Enter answer key (10 answers like A B C D):\n");
//     for (int i = 0; i < 10; i++) {
//         scanf(" %c", &answerKey[i]);  // space before %c avoids input issues
//     }
//     // Input student responses
//     printf("Enter student answers:\n");
//     for (int i = 0; i < 10; i++) {
//         scanf(" %c", &studentAns[i]);
//     }
//     // Compare answers
//     for (int i = 0; i < 10; i++) {
//         if (answerKey[i] == studentAns[i]) {
//             correct++;
//         }
//     }
//     // Output result
//     printf("Total correct answers = %d\n", correct);
//     return 0;
// }
//Sum of first 20 fibonacci numbers
// Function to check if a number is prime
// int isPrime(int num) {
//     if (num <= 1)
//         return 0;       
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0)
//             return 0;
//     }
//     return 1;
// }
// int main() {
//     int fib[20];
//     // First two Fibonacci numbers
//     fib[0] = 0;
//     fib[1] = 1;
//     // Generate Fibonacci sequence
//     for (int i = 2; i < 20; i++) {
//         fib[i] = fib[i - 1] + fib[i - 2];
//     }
//     printf("First 20 Fibonacci numbers:\n");
//     for (int i = 0; i < 20; i++) {
//         printf("%d ", fib[i]);
//     }
//     printf("\n\nPrime Fibonacci numbers:\n");
//     // Check for prime Fibonacci numbers
//     for (int i = 0; i < 20; i++) {
//         if (isPrime(fib[i])) {
//             printf("%d ", fib[i]);
//         }
//     }
//     return 0;
// }
// //Target Sum
// int main() {
//     int n, i, j, num;
//     // Input size
//     printf("Enter size of array: ");
//     scanf("%d", &n);
//     int arr[n];  // Variable Length Array (VLA)
//     // Input elements
//     printf("Enter %d elements:\n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     // Input target sum
//     printf("Enter target sum: ");
//     scanf("%d", &num);
//     printf("Pairs with sum %d are:\n", num);
//     int found = 0;
//     // Find pairs
//     for(i = 0; i < n; i++) {
//         for(j = i + 1; j < n; j++) {
//             if(arr[i] + arr[j] == num) {
//                 printf("(%d, %d)\n", arr[i], arr[j]);
//                 found = 1;
//             }
//         }
//     }
//     if(!found) {
//         printf("No pairs found.\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// //Passing array to a function
// void display(int[], int);
// int main(){
//     int arr[4]={1, 2, 3, 4};
//     display(arr, 4);
//     printf("\n");
//     for(int i=0; i<4; i++){
//         printf("%d", arr[i]);
//     }
//     return 0;
// }
// void display(int a[], int n){
//     a[1]=22;
//     for(int i=0; i<n; i++){
//         printf("%d", a[i]);
//     }
// }
//Merge Sorted array
// int main(){
//     int n, m, c, i, j, k;
//     scanf("%d", &n);
//     int arr1[n];
//     printf("\nEnter arr1 elements in asc orser: ");
//     for(int i=0; i<n; i++){
//         scanf("%d", &arr1[i]);
//     }
//     scanf("%d", &m);
//     int arr2[m];
//     printf("\nEnter arr2[] elements in asc order: ");
//     for(int i=0; i<m; i++){
//         scanf("%d", &arr2[i]);
//     }
//     c=n+m;
//     int arr3[c];
//     i=0;
//     j=0;
//     k=0;
//     while(i<n && j<m){
//         if(arr1[i]<arr2[j]){
//             arr3[k]=arr1[i];
//             i++;
//         }
//         else{
//             arr3[k]=arr2[j];
//             j++;
//         }
//         k++;
//     }
//     while(j<m){
//         arr3[k]=arr2[j];
//         j++;
//         k++;
//     }
//     printf("\nMerged sorted array is: ");
//     for(int i=0; i<c; i++){
//         printf("%d ", arr3[i]);
//     }
//     return 0;
// }
//Merge two unsorted arrays
// int main() {
//     int A[100], B[100], C[200];
//     int n, m, i;
//     // Input size and elements of first array
//     printf("Enter size of first array: ");
//     scanf("%d", &n);

//     printf("Enter elements of first array:\n");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &A[i]);
//     }
//     // Input size and elements of second array
//     printf("Enter size of second array: ");
//     scanf("%d", &m);
//     printf("Enter elements of second array:\n");
//     for(i = 0; i < m; i++) {
//         scanf("%d", &B[i]);
//     }
//     // Merge arrays
//     for(i = 0; i < n; i++) {
//         C[i] = A[i];
//     }
//     for(i = 0; i < m; i++) {
//         C[n + i] = B[i];
//     }
//     // Display merged array
//     printf("Merged array:\n");
//     for(i = 0; i < n + m; i++) {
//         printf("%d ", C[i]);
//     }
//     return 0;
// }
// //Array Rotate
// int main(){
//     int n, m, temp;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }
//     scanf("%d", &m);
//     for(int i=0; i<m; i++){
//         temp=arr[n-1];
//         for(int j=n-1; j>0; j--){
//             arr[j]=arr[j-1];
//         }
//         arr[0]=temp;
//     }
//     for(int i=0; i<n; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }
// int main() {
//     int A[100], n, i, j, temp;

//     // Input number of elements
//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     // Input array elements
//     printf("Enter elements:\n");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &A[i]);
//     }

//     // Bubble Sort logic
//     for(i = 0; i < n - 1; i++) {
//         for(j = 0; j < n - i - 1; j++) {
//             if(A[j] > A[j + 1]) {
//                 // Swap
//                 temp = A[j];
//                 A[j] = A[j + 1];
//                 A[j + 1] = temp;
//             }
//         }
//     }

//     // Print sorted array
//     printf("Sorted array:\n");
//     for(i = 0; i < n; i++) {
//         printf("%d ", A[i]);
//     }

//     return 0;
// }

//array element search
// int main(){
//     int  n, key, low, mid, high, found=0;
//     int arr[100];
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     printf("\nEnter %d elements in array: ", n);
//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the key you want to search: ");
//     scanf("%d", &key);
//     low=0;
//     high=n-1;
//     while(low<=high){
//         mid=(low+high)/2;
//         if(arr[mid]==key){
//             printf("\nKey %d found at index: %d", key, mid);
//             found=1;
//             break;
//         }
//         else if(key<arr[mid]){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//         if(found==0){
//             printf("\nKey %d not found", key);
//         }
//     }
// }


//A[k]=BA(A)+w(k-lower_bound)
//TO insert an element at the end of an array
// #include<stdio.h>
// #define MAX 5
// int main(){
//     int arr[MAX];
//     int n, item;
//     printf("Enter value of n: ");
//     scanf("%d", &n);
//     if(n<0 || n>MAX){
//         printf("Invalid value");
//         return 0;
//     }
//     printf("\nEnter %d lements in array: ", n);
//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }
//     printf("\nEnter the element you want to insert at the end: ");
//     scanf("%d", &item);
//     if(n==MAX){
//         printf("Overflow. Array is already full. Can't insert");
//         return 0;
//     }
//     else{
//         arr[n]=item;
//         n=n+1;
//         printf("\nUpdated array is: ");
//         for(int i=0; i<n; i++){
//             printf("%d ", arr[i]);
//         }
//     }
//     return 0;
// }
// #include <stdio.h>
// #define MAX 5
// int main(){
//     int A[MAX], n, i, deleted;
//     printf("Enter num of elements: ");
//     scanf("%d", &n);
//     printf("Enter elements: \n");
//     for(i=0; i<n; i++){
//         scanf("%d", &A[i]);
//     }
//     if(n==0){
//         printf("Underflow array is empty.\n");
//     }else{
//         deleted=A[n-1];
//         n--;
//         printf("Deleted element: %d\n", deleted);
//     }
//     printf("Array after deletion:\n");
//     for(i=0; i<n; i++){
//         printf("%d", A[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n, item, flag=0;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }
//     printf("\nEnter element you want to search: ");
//     scanf("%d", &item);
//     for(int i=0; i<n; i++){
//         if(arr[i]==item){
//             printf("\nItem found at index %d", i);
//             flag=1;
//             break;
//         }
//     }
//     if(flag==0){
//         printf("\nItem not found in array");
//     }
//     return 0;
// }


