#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
typedef struct {
  int age ;
  struct person *next;
}data;


data* CreateNode( int Data);

void PrintData(data *ptr);

data* AddEnd(data *ptr, int siz);

data *AddFirst(data *ptr , int siz);

data* AddPosition(data *ptr, int position, int ag);

int Count(data *ptr);

data *DelFirst(data *head);

void DelPos(data **head , int pos);

void DelAll(data **head);

data *ReverseList(data *head);

int Finddata(data *head , int n);

data *SortingEByLinks(data *head);

void SortingByData(data *head);

#endif // DATA_H_INCLUDED
