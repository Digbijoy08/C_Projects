#include<stdio.h>

int main(){
    int array[]={2,3,4,5,6};
    // int *ptr1= &array[0];
    // printf("%u , %u",ptr,ptr1);
    int *ptr=array;  //  int *ptr=array and int *ptr= &array[0] both are same. both will save the address of 1st index element
    int length=sizeof(array)/sizeof(array[0]);
    printf(" The size of the array is ->%d\n",length);
    printf("printing the array elements using their address...\n");

    for (int i = 0; i < length; i++)
    {
        printf("%d\n",*(ptr+i));
    }



    printf("taking user input in array using address\n");
    int student_marks[4];
    int *pointer;
    int *copy;
    int len=sizeof(student_marks)/sizeof(student_marks[0]);
    pointer=student_marks;
    copy= student_marks;
    

    for (int k = 0; k < len; k++)
    {
        printf("Enter the no:%d the value\n",k+1);
        scanf("%d",pointer);
         
        pointer=pointer+1; // or i can also write pointer++
    }
    
    for (int m = 0; m < len; m++)  //printing the array values using their address
    {
        printf("%d ", *(copy));
        copy++;
    }
    printf("\n");
    printf("----------------------------\n");
    
    for (int l = 0; l < len; l++)  //printing the array value using array index
    {
        printf("%d ",student_marks[l]);
    }

    return 0;
}
