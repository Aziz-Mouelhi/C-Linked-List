
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
  head = AddPosition(head,2,123); //ADD BY POSITION//
  PrintData(head);
///////////////////////
int x = Count(head); //COUNTER//
printf(" list elements are :%d \n\n:",x);
////////////////////////////
printf("After del first element :\n");
head = DelFirst(head); //DELETE FIRST NODE //
PrintData(head);
////////////////////////////
printf("After del :\n\n");
DelPos(&head,6); // DEL BY POSITION //
PrintData(head);
    ////////////////////////

    printf("List after reverse :\n");
    head=ReverseList(head); //REVERSE ALL LIST//
    PrintData(head);
    ///////////////////////////
    if(Finddata(head,1)==1)printf("data find\n"); //FINDING DATA//
    else printf("no data find\n");
    ///////////////
     head =DelAll(head); //DEL ALL LIST//
    PrintData(head);
    printf("count = %d",Count(head));
  return 0;
}
