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
        printf("You Have Chosen To Add %d Elements At the end\n\n\n",siz);
    while (i < siz) {
        printf("Add Element Number %d\n", i + 1);
        scanf("%d", &ag);

        data *ptr1 = malloc(sizeof(data));
        ptr1->age = ag;
        ptr1->next = NULL;

        if (ptr == NULL) {

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

    return head;
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
void DelAll(data **head) {
    data *current = *head;
    data *next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    // After all nodes are deleted, set head to NULL
    *head = NULL;

    printf("All nodes deleted successfully.\n");
}/////////////////////////////////////////
data *ReverseList(data* head){
    data *next = NULL;
    data *prev = NULL;

    while (head != NULL) {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
}
int Finddata(data *head , int n){
            data *ptr = head ;
        if(ptr == NULL){
            printf("Your List Is Empty:\n");
        }else{
                while(ptr != NULL){
                    if(ptr->age == n){
                        return 1 ;
                    }else{
                    ptr = ptr->next;}
                }
                return 0;
        }
}

data *SortingEByLinks(data *head){
        data *p , *q , *end , *tmp , *r ;
        for(end = NULL ; end != head->next ; end = p){
            for(r = p = head; p->next !=end ;r = p ,p = p->next){
                q= p->next;
                if(p->age > q->age){
                    p->next = q->next;
                    q->next = p ;
                    if(p != head){
                        r->next = q;
                    }else{
                    head = q;
                    tmp = p;
                    p=q;
                    q =tmp;
                    }
                }
            }
        }
        return head;
}

 void SortingByData(data *head){
        data *p , *q , *end;
        int temp;
        for(end = NULL ; end != head->next ;end = p){
            for(p = head ; p->next != end ; p = p->next){
                q = p ->next;
                if(p->age > q->age){
                    temp = p->age;
                    p->age = q->age;
                    q->age = temp;
                }
            }
        }
}
