
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "data.h"
int main(){
  data *head ; //  HEADER OF LIST CREATION:://
  head = CreateNode(21);
  head=AddEnd(head,3); // ADD AT THE END ::
  PrintData(head);
  ////////////////////
  head=AddFirst(head,2);// ADD AT THE BEG ::
  PrintData(head);
  printf("Data After Insertion :\n\n");
  ///////////////////////
  head = AddPosition(head,2,123);
  PrintData(head);
///////////////////////
int x = Count(head);
printf(" list elements are :%d \n\n:",x);
////////////////////////////
printf("After del first element :\n");
head = DelFirst(head);
PrintData(head);
////////////////////////////
printf("After del :\n\n");
DelPos(&head,6);
PrintData(head);
    ////////////////////////
    head =DelAll(head);
    PrintData(head);
    printf("count = %d",Count(head));
  return 0;
}
