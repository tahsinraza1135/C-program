#include<stdio.h>

//Display Address using pointers
// int main(){
//     char ch = 'A';
//     int num = 17;
//     float fl=2.5;
//     char *ptr1=&ch;
//     int *ptr2=&num;
//     float *ptr3=&fl;
//       // Display values
//     printf("Values:\n");
//     printf("Char = %c\n", *ptr1);
//     printf("Int = %d\n", *ptr2);
//     printf("Float = %.2f\n", *ptr3);

//     // Display addresses
//     printf("\nAddresses:\n");
//     printf("Address of char = %p\n", ptr1);
//     printf("Address of int = %p\n", ptr2);
//     printf("Address of float = %p\n", ptr3);

//     return 0;
// }


//Adding two pointers
// int main(){
//     int a, b, c, *p, *q;
//     scanf("%d %d", &a, &b);
//     p=&a;
//     q=&b;
//     c=*p+*q;
//     printf("Sum is: %d", c);
//     return 0;
// }


//Find greatest of three using pointers
// int main(){
//     int a, b, c, d, *p, *q, *r;
//     scanf("%d%d%d", &a, &b, &c);
//     p=&a;
//     q=&b;
//     r=&c;
//     d=(*p>*q)?((*p>*r)?*p:*r):((*q>*r)?*q:*r);
//     printf("Greatest of %d,%d and %d is: %d", *p, *q, *r, d);
//     return 0;
// }

//Swap using pointers without third variable 
// int main(){
//     int a=10, b=20;
//     int *p1=&a;
//     int *p2=&b;
//     printf("before swapping %d %d\n", *p1, *p2);
//     *p1=*p1+*p2;
//     *p2=*p1-*p2;
//     *p1=*p1-*p2;
//     printf("after swapping %d %d", *p1, *p2);
//     return 0;
// }

//To declare a void pointer Assign the address of int float and char var to the void pointer
// int main() {
//     int i;
//     float f;
//     char c;
//     void *p;
//     scanf("%d %f %c", &i, &f, &c);
//     p=&i;
//     printf("Value of int i is: %d", *(int*)p);
//     p=&f;
//     printf("\nValue of float f is: %.2f", *(float*)p);
//     p=&c;
//     printf("\nValue of char c is: %c", *(char*)p);
//     return 0;
// }


//WAP jto show pointer of any data type take similar bytes
// int main(){
//     printf("char is %d byte and char* is %d bytes", sizeof(char), sizeof(char*));
//     printf("\nint is %d bytes and int* is %d bytes", sizeof(int), sizeof(int*));
//     printf("\ndouble is %d bytes and " 
//     "double* is %d bytes", sizeof(double), sizeof(double*));
//     return 0;
// }


//WAP to display array elements with their address using array name as a pointer
// #include <stdio.h>
// int main() {
//     int a[] = {2,3,4,5};
//     int s=sizeof(a)/sizeof(a[0]);
//     int i=0;
//     while(i<s){
//         printf("a[%d] = %d, address: %u\n", i, *(a+i), a+i);
//         i++;
//     }
//     return 0;
// }


//WAP to find the sum of all the eelements of an array. Use the array name as a pointer
// int main(){
//     int a[]={2,3,4,5,6};
//     int s=sizeof(a)/sizeof(a[0]);
//     int i=0, sum=0;
//     while(i<s){
//         sum+=*(a+i++);
//     }
//     printf("Sum is: %d", sum);
//     return 0;
// }


//WAP to display the sum of squares and cubes of array elements using array name as pointer
// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int i;
//     int sum_sq = 0, sum_cube = 0;
//     // Using array name as pointer
//     for(i = 0; i < 5; i++) {
//         int val = *(arr + i);
//         sum_sq += val * val;           // square
//         sum_cube += val * val * val;   // cube
//     }
//     printf("Sum of squares = %d\n", sum_sq);
//     printf("Sum of cubes = %d\n", sum_cube);
//     return 0;
// }


//WAP to copy the elements of one array to another using pointers
// int main(){
//     int a[]={2,3,4,5};
//     int s=sizeof(a)/sizeof(a[0]);
//     int *p;
//     int b[s];
//     p=a;
//     for(int i=0; i<s; i++){
//         b[i]=*p;
//         p++;
//     }
//     printf("\nDuplicated array: ");
//     for(int i=0; i<s; i++){
//         printf(" %d", b[i]);
//     }
//     return 0;
// }

//A sensor system stores temperature readings in an arrya WAP to find the max temperaturre and count how many readings are above average using only pointer arithmetic
//Cricket analysis 
