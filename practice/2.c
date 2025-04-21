#include<stdio.h>
void create(int arr[], int n){
    printf("Inserting the elements in array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void display(int arr[], int n){
    printf("Displaying the elements of array\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void sort(int arr[], int n){
    int temp;
    printf("Sorting the array\n");
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void sort_display(int arr[], int n){
    printf("Displaying the array after sorting the elements\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main(){
    int choice,n;
    printf("Enter the size for the array: ");
    scanf("%d",&n);
    int arr[n];
    while (1){
        
        printf("Array Operation:\n");
        printf("1. Create an array\n");
        printf("2. Display the array\n");
        printf("3. Sorting the element in array\n");
        printf("4. Display the sorted array\n");
        printf("5. Exit\n");
        printf("Enter a no. of choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            create(arr,n);
            break;
            case 2:
            display(arr,n);
            break;
            case 3:
            sort(arr,n);  
            break;
            case 4:
            sort_display(arr,n);
            break;
            case 5:
            return 0;
            printf("Exiting the operation...\n");
            break;
            default:
            printf("Inavlid Choice\n");
            break;
    }
    }
    return 0;
}