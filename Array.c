#include<stdio.h>
//Check answers 
int main(){
    char ans[10], resp[10], count=0;
    printf("Enter correect opotions a, b, c, d: ");
    for(int i=0; i<10; i++){
        scanf(" %c", &ans[i]);
    }
    printf("\nEnter respose: ");
    for(int i=0; i<10; i++){
        scanf(" %c", &resp[i]);
    }
    for(int i=0; i<10; i++){
        scanf(ans[i]==resp[i]){
            count++;
        }
    }
    for(int i=0; i<10; i++){
        if(ans[i]==resp[i]){
            count++;
        }
    }
    printf("\nTotal correct answers: %d out of 10", count);
    return 0;
}
//Sum of first 20 fibonacci num
int isPrime(int num){
    if(num<=1)
        return 0;
    for(int i=2; i*i<=num; i++){
        if (num%i==0)
            return 0;
    }
}
int main(){
    int fib[20];
    fib[0]=0;
    fib[1]=1;
    for(int i=2; i<20; i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    printf("First 20 fibonacci numbers: \n");
    for(int i=0; i<20; i++){
        if(isPrime(fib[i])){
            printf("%d", fib[i]);
        }
    }
    return 0;
}
//Target Sum
int main() {
    int n, i, j, num;
    // Input size
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];  // Variable Length Array (VLA)
    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Input target sum
    printf("Enter target sum: ");
    scanf("%d", &num);
    printf("Pairs with sum %d are:\n", num);
    int found = 0;
    // Find pairs
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == num) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    if(!found) {
        printf("No pairs found.\n");
    }
    return 0;
}


int main() {
    int arr[100], n, x, i;
    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);
    // Input sorted array
    printf("Enter elements in ascending order:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Input element to insert
    printf("Enter element to insert: ");
    scanf("%d", &x);
    // Shift elements to make space
    for(i = n - 1; i >= 0; i--) {
        if(arr[i] > x) {
            arr[i + 1] = arr[i];
        } else {
            break;
        }
    }
    // Insert element
    arr[i + 1] = x;
    n++;
    // Print updated array
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
//Read 10 marks count how many values fall in each group
int main() {
    int marks[10];
    int freq[11] = {0}; // 11 groups: 0-9,10-19,...,90-99,100
    int i, index;
    // Input marks
    printf("Enter marks of 10 students (0-100):\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
        // Validate input
        if(marks[i] < 0 || marks[i] > 100) {
            printf("Invalid input! Enter again:\n");
            i--;
        }
    }
    // Grouping logic
    for(i = 0; i < 10; i++) {
        if(marks[i] == 100) {
            index = 10;   // last group
        } else {
            index = marks[i] / 10;
        }
        freq[index]++;
    }
    // Display result
    printf("\nFrequency Distribution:\n");
    for(i = 0; i < 10; i++) {
        printf("%d-%d : %d\n", i*10, i*10 + 9, freq[i]);
    }
    printf("100-100 : %d\n", freq[10]);
    return 0;
}
//Passing array to a function
void display(int[], int);
int main(){
    int arr[4]={1, 2, 3, 4};
    display(arr, 4);
    printf("\n");
    for(int i=0; i<4; i++){
        printf("%d", arr[i]);
    }
    return 0;
}
void display(int a[], int n){
    a[1]=22;
    for(int i=0; i<n; i++){
        printf("%d", a[i]);
    }
}
//Merge two unsorted arrays
int main(){
    int A[100], B[100], C[200];
    int n, m, i;
    //Input size and elements of first array
    printf("Enter size of first array: ");
    scanf("%d", &n);
    printf("Enter alements of first array: \n");
    for(i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    //Input size and elements of second array
    printf("Enter size of secind array: ");
    scanf("%d", &m);
    printf("Enter elements of second array:\n");
    for(i=0; i<m; i++){
        scanf("%d", &B[i]);
    }
    //Merge arrays
    for(i=0; i<n; i++){
        C[i]=A[i];
    }
    for(i=0; i<m; i++){
        C[n+1]=B[i];
    }
    //Display merged array
    printf("Merged array:\n");
    for(i=0; i<n+m; i++){
        printf("%d", C[i]);
    }
    return 0;
}
//Arrayu sorting 
int main(){
    int A[100], n, i, j, temp;
    //Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);
    //Input array elements
    printf("Enter elements:\n");
    for(i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    //Bubble Sort logic
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(A[j]>A[j+1]){
                //Swap 
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
//Print sorted arary
printf("Sorted array:\n");
for(i=0; i<n; i++){
    printf("%d ", A[i]);
}
return 0;
}
//Array Rotate
int main(){
    int n, m, temp;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    for(int i=0; i<m; i++){
        temp=arr[n-1];
        for(int j=n-1; j>0; j--){
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
    for(int i=0; i<n; i++){
        printf("%d", arr[i]);
    }
    return 0;
}
//Linear Search program
int main(){
    int n, i, key, found=0;
    printf("Enter num of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    for(i=0; i<n; i++){
        if(arr[i]==key){
            printf("Element found at position %d\n", i);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Element not found\n");
    }
    return 0;
}
//Binary Search program
int main(){
    int n, i, key, low, high, mid, found=0;
    printf("Enter num of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements (sorted):\n", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            printf("Elements found at position %d\n", mid);
            found=1;
            break;
        }
        else if(key<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(found==0){
        printf("Elements not found\n");
    }
    return 0;
}
