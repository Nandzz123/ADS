 #include<stdio.h>
   struct book{
       int id;
       char bookname;
       char authorname;
       int price;
  
   };
  
  int main(){
     struct  book b1;
      printf("enter book id");
      scanf("%d",&b1.id);
      printf("enter book name:");
      scanf("%c",&b1.bookname);
      printf("enter author name:");
      scanf("%c",&b1.authorname);
      printf("enter price:");
      scanf("%d",&b1.price);
  }