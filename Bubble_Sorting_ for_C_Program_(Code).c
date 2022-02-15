///C program for implementation of bubble sort
#include <stdio.h>

void Swaping(int *Frist_Index_Value, int *Second_Index_Value){
    int Temp_Variable = *Frist_Index_Value;
    *Frist_Index_Value = *Second_Index_Value;
    *Second_Index_Value = Temp_Variable;
}
///The bubble sorting implementation function is shown below
void Bubble_Sorting(int Array[], int Number){
    int Index_I,  Index_J;
    for(Index_I = 0; Index_I < Number-1; Index_I++)
        for(Index_J = 0; Index_J < Number - Index_I-1; Index_J++)
                if (Array[Index_J] > Array[Index_J+1])
                    Swaping(&Array[Index_J], &Array[Index_J+1]);
}
void printArray(int Array[] , int Array_Size){
    int Index_of_Array;
     for(Index_of_Array = 0; Index_of_Array < Array_Size; Index_of_Array++)
        printf("%d ",Array[Index_of_Array]);
     printf("\n");
}

int main() {
 int array[] = {68,76,97,42,43,65};
 int Number = sizeof(array)/sizeof(array[0]);
 printf("These are unsorted array element:");
 printArray(array,Number);
 Bubble_Sorting(array,Number);
 printf("These are sorted array element:");
 printArray(array,Number);
 return 0;
}
