#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 5
struct library
{
  int an;
  char t[20];
  char a[20];
  int p;
  int flag;
 };
 struct library B[N],temp;
 int j,i=0,choice,count=0;
 char author[10],title[10];
 int main()
 {
 while(1)
 {
  printf("1.Add book information\n");
  printf("2.Display book information\n");
  printf("3.List all books of given author\n");
  printf("4.List the title of specified book\n");
  printf("5.List the count of books in the library\n");
  printf("6.List the books in the order of accession no\n");
  printf("7.Exit\n");
  printf("enter your choice\n");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
        for(i=0;i<N;i++)
        {
        printf("information of book %d:\n",1+i);
        printf("enter accession number:");
        scanf("%d",&B[i].an);
        printf("enter book name:");
        scanf("%s",B[i].t);
        printf("enter author name:");
        scanf("%s",B[i].a);
        printf("enter the price:");
        scanf("%d",&B[i].p);
        printf("issued/available(1/0):");
        scanf("%d",&B[i].flag);
        printf("book added sucessfully\n");
        count++;
        }
        break;
  case 2:
      for(i=0;i<N;i++)
      {
      printf("data of book:%d\n",1+i);
      printf("accesion number:%d\n",B[i].an);
      printf("book name:%s\n",B[i].t);
      printf("author name:%s\n",B[i].a);
      printf("price:%d\n",B[i].p);
      printf("issued/available(1/0):%d\n",B[i].flag);
      }
      break;
  case 3:
    printf("enter name of author\n");
    scanf("%s",author);
    printf("all books by author %s are:\n",author);
    for(i=0;i<=N;i++)
    if((strcmp(author,B[i].a)==0))
    printf("%s\n",B[i].t);
    break;
    case 4:
      printf("enter the title of book\n");
      scanf("%s",title);
      for(i=0;i<N;i++)
      if((strcmp(title,B[i].t)==0))
      {
      printf("accesion number:%d\n",B[i].an);
      printf("author name:%s\n",B[i].a);
      printf("price:%d\n",B[i].p);
      printf("issued/available(1/0):%d\n",B[i].flag);
      } 
      break;
      case 5:
        printf("total number of books=%d\n",count);
        break;
      case 6:
        printf("after sorting in ascending order by accession number\n");
         for(i=0;i<N;i++)
         for(j=i+1;j<N;j++)
         if(B[i].an>B[j].an)
         {
           temp=B[i];
           B[i]=B[j];
           B[j]=temp;
     }
     printf("sorted record:\n");
     for(i=0;i<N;i++)
     printf("%s\t\t %d\t\t\n",B[i].t,B[i].an);
        break;
         case 7:
           exit(0);
           break;
         return 0;
 }
 }
 }