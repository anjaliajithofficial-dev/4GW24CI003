#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void merge(int arr[],int left,int mid,int right){

    int i,j,k;
    int n1=mid-left+1;
    int n2=right-mid;
    int *L =(int*) malloc (n1*sizeof(int));
    int *R =(int *)malloc(n2*sizeof(int));
    for(i=0;i<n1;i++)
        L[i]=arr[left+i];
        for(j=0;j<n2;j++)
            R[j]=arr[mid+1+j];
            i=0;
            j=0;
            k=left;
            while(i<n1&&j<n2){
                if(L[i]<=R[j]){
                    arr[k]=L[i];
                    i++;
                }
                else{
                    arr[k]=R[j];
                    j++;
                }
                k++;
            }
            while(i<n1){
                arr[k]=L[i];
                i++;
                 k++;
            }
            while(j<n2){
                arr[k]=R[i];
                j++;
                 k++;
            }
            free(L);
            free(R);

}
void mergeSort(int arr[],int left,int right){
    if(left<right){
        int mid=left+(right-left)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
void generateRandomNumbers(int arr[],int n){
    for(int i=0;i<n;i++)
        arr[i]=rand()%100000; 
}
int main(){
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    if(n<=5000){
        printf("Please enter a value greater than 5000 \n");
        return 1;
    }
    int *arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("Memory Allocation Failed  \n");
        return 1;
    }
    generateRandomNumbers(arr,n);
    clock_t start =clock();
    for(int i=0;i<1000;i++)
        mergeSort(arr,0,n-1);
    clock_t end =clock();
    double timeTaken = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time taken to sort %d elements: %f seconds \n",n,timeTaken);

    free(arr);
    return 0;
}