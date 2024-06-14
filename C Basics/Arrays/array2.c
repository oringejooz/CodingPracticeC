//Calculating Avg age

#include <stdio.h>
int main()
{
    // int n;
    // printf("Enter number of elements in Array : ");
    // scanf("%d",&n);
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     printf("Enter element %d :",i+1);
    //     scanf("%d",&arr[i]);
    // }
    // float sum =0;
    // for(int i=0;i<n;i++){
    //     sum+=arr[i];
    // }
    // printf("Average Age : %.2f, Round off %d\n",sum/n,(int)sum/n);

    int arr1[2][3]={{1,2,3},{4,5,6}};
    int arr2[2][2][2]={{{1,2},{3,4}},{{5,5},{6,6}}};
    int i,j,k;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Element %d %d : %d ",i,j,arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(k=0;k<2;k++){
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                printf("Element %d %d %d: %d ",k,i,j,arr2[k][i][j]);
            }
        printf("\n");
    }
    printf("\n");
    }


}