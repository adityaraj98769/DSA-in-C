
#include <stdio.h>
#include<stdlib.h>
int main(){
    // Write C code here
    int a [100], size, pos,i,num;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    //show
     printf("Input all the Elements of array are :");
    for(i=0;i<size;i++){
       
        scanf("%d",&a[i]);
    }
    //  printf("All the elements present in array is :");
    // for(i=0;i<size;i++){
       
    //     printf("%d",a[i]);
    // }
    //   //Insertion
    //   printf("Enter the value who you want to insert :");
    //   scanf("%d",&num);
    //   printf("Enter the position :");
    //   scanf("%d",&pos);
    //   if(pos<=0 || pos>size+1){
    //     printf("invalid position");
    //   }
    //   else
    //   for(i=size-1;i>=pos-1;i--){
    //     a[i+1] = a[i];
    //     }
    //     a[pos - 1] = num;
    //     size++;
    //       printf("All the elements present in array is :");
    // for(i=0;i<size;i++){
       
    //     printf("%d",a[i]);
    
    //   }
      //Deletion
      printf("Enter the value who you want to delete :");
      scanf("%d",&num);
      printf("Enter the position :");
      scanf("%d",&pos);
       for(i=pos-1;i<size;i++){
        a[i] = a[i+1];
        }
      
        size--;
          printf("All the elements present in array is :");
    for(i=0;i<size;i++){
       
        printf("%d",a[i]);
    
      }

    return 0;
}