#include<stdio.h>
int main(){
    int n, flag=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]&&i!=j){
                flag=1;
                printf("Duplicates found at %d and %d", i, j);
            }
        }
    }
    if(flag==0){
        printf("No duplicates found");
    }
    return 0;

}
// int main() {
//     int n, i;
//     printf("Enter the size of array: ");
//     scanf("%d", &n);

//     int arr[n];
//     printf("Enter %d elements:\n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int largest = arr[0];
//     int second = arr[0];
//     for(i = 1; i < n; i++) {
//         if(arr[i] > largest) {
//             second = largest;
//             largest = arr[i];
//         }
//         else if(arr[i] > second && arr[i] != largest) {
//             second = arr[i];
//         }
//     }

//     printf("Largest element = %d\n", largest);
//     printf("Second largest element = %d\n", second);

//     return 0;
// }

//int main(){
//     int n, min=0, max=0,  min_pos=0, max_pos=0;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }
//     min = arr[0];
//     max = arr[0];
//     for(int i=0; i<n; i++){
//         if(arr[i]<min){
//             min=arr[i];
//             min_pos=i;
//         }
//         if(arr[i]>max){
//             max=arr[i];
//             max_pos=i;
//         }
//     }
//     printf("Max is: %d and pos is: %d", max, max_pos);
//     printf("\nMin is: %d and pos is: %d", min, min_pos);
//     return 0;
//}

// int main(){
//     int n, pos_num, neg_sum;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0; i<n; i++){
//         if(arr[i]<0){
//             neg_sum+=arr[i];
//         }
//         else{
//             pos_num+=arr[i];
//         }
//     }
//     printf("Positive sum is: %d", pos_num);
//     printf("\nNegative sum is: %d", neg_sum);
//     return 0; 
// }

// int main(){
//     int n;
//     printf("enter number: ");
//     scanf("%d", &n);
//     int arr[n];

//     printf("enter array:\n", n);
//     for (int i=0; i<n; i++){
//         int num;
//         scanf("%d", &num);
//         if(num%2==0){
//             arr[i]=num;
//             j++;
//         }
//     }
//     printf("Array elements are:\n");
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
// }

// int main(){
//     int arr1[4]={11,22,33,44};
//     int s = sizeof(arr1)/sizeof(arr1[0]);
//     int arr2[s];
//     for(int i=0; i<s; i++){
//         arr2[i]=arr1[i];
//         printf("%d", arr2[i]);
//     }
//     return 0;
// }
