#include <stdio.h>
#include <stdlib.h>


#include "data.h"
////////////////////////////////////////
data* CreateNode( int Data){
          data *ptr1 = malloc(sizeof(data));
          ptr1->age = Data ;
          ptr1->next = NULL;
          return ptr1;
}
/////////////////////////////////////////
void PrintData(data *ptr){
  data *ptr1 = ptr;
  if(ptr = NULL){
    printf("The List Is Empty :\n");
  }else{
    while (ptr1 != NULL) {
      printf("Data : %d\n",ptr1->age);
      ptr1 = ptr1->next;
    }
  }
}
//////////////////////
data* AddEnd(data *ptr, int siz) {
    int i = 0;
    int ag;
    data *head = ptr;
        printf("You Have Chosen To Add %d Elements At the end\n\n\n",siz );
    while (i < siz) {
        printf("Add Element Number %d\n", i + 1);
        scanf("%d", &ag);

        data *ptr1 = malloc(sizeof(data));
        ptr1->age = ag;
        ptr1->next = NULL;

        if (ptr == NULL) {
            // If the list is empty, set the new node as the head
            head = ptr1;
            ptr = head;
        } else {
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = ptr1;
        }

        i++;
    }

    return head; // Return the new head of the linked list
}
data *AddFirst(data *ptr , int siz){
      int i = 0 ;
      int ag ;
      data *head = ptr ;
  printf("you have chossen to add %d at the begining :\n\n", siz);
  while(i < siz){
    printf("Add element number %d :\n",i+1 );scanf("%d",&ag );
    data *ptr2 = malloc(sizeof(data));
    ptr2->age = ag;
    ptr2->next = NULL;
        if(ptr == NULL){
          head = ptr2 ;
          ptr = head ;
        }
        else {
          ptr2->next = head;
          head = ptr2 ;
        }
        i++;
  }
  return head ;
}
data* AddPosition(data *ptr, int position, int ag) {
    int counter = 1;
    data *head = ptr;
    data *ptr1 = ptr;


    while (counter < position - 1 && ptr1 != NULL) {
        ptr1 = ptr1->next;
        counter++;
    }

    if (ptr1 == NULL) {
        printf("Invalid position\n");
        return head;
    }

    data *ptr2 = malloc(sizeof(data));
    ptr2->age = ag;


    ptr2->next = ptr1->next;
    ptr1->next = ptr2;

    return head;
}
////////////////////
int Count(data *ptr) {
    data *ptr1 = ptr;
    int cnt = 0; // Initialize cnt to 0
    if (ptr1 == NULL) {
        printf("Your List is empty.\n\n"); // Removed the comma
    } else {
        while (ptr1 != NULL) {
            ptr1 = ptr1->next;
            cnt++;
        }
    }
    return cnt;
}
//////////////////////////////////////////
data *DelFirst(data *head){
    data  *ptr ;
    ptr  = head;
      if(ptr == NULL){
        printf("Your List Is Empty :\n\n");
      }else{
        head = head->next;
        free(ptr);
        ptr = NULL;
      }
                return head;
    }
//////////////////////////////////:
void DelPos(data **head , int pos){
        data *current = *head ;
        data *previous = *head ;
        if(*head == NULL){
          printf("List Is Empty :\n\n");
        }else if (pos == 1) {
              *head = current->next;
              free(current);
              current = NULL;
        }else{
            while(pos != 1 ){
              previous = current ;
              current = current->next;
              pos--;
            }

            previous->next = current->next ;
            free(current);
            current = NULL;
        }
      }
    ///////////////////////////////////////
data *DelAll(data *head){
      data *temp = head ;
      while(temp != NULL){
        temp = temp->next;
        free(head);
        head = temp ;
      }
      printf("delete succes :\n");
      return head ;
    }
