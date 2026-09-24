 #include<stdio.h>
   int main()
   {
       int stack[100];
       int top=-1;
       int n,ch,val,i;
       printf("enter the size of stack:");
       scanf("%d",&n);
       if(n<=0||n>100)
      {
          printf("invalid size\n");
          return 1;
      }
      while(1)
      {
          printf("stack operators:\n");
          printf("1.push 2.pop 3.display 4.exit\n");
          printf("enter your choice:");
          scanf("%d",&ch);
          if (ch==1)
          {
              if(top==n-1)
              {
                  printf("stack overflow\n");
              }
              else{
                  printf("enter value\n");
                  scanf("%d",&val);
                  top++;
                  stack[top]=val;
                  printf("%d pushed\n",val);
 
              }
          }
          else if (ch==2)
          {
              if (top==-1)
              {
                  printf("stack underflow\n");
             }
              else
              {
                  printf("%d popped\n",stack[top]);
                  top--;
              }
          }
          else if(ch==3)
          {
             if(top==-1)
             {
                 printf("stack is empty\n");
             }
             else
             {
                 printf("stack elements are:\n");
                 for(i=top;i>=0;i--)
                 {
                     printf("%d\n",stack[i]);
                 }
             }
          }
          else if(ch==4)
          {
              break;
          }
          else
          {
              printf("invalid choice\n");
          }
      }
          return 0;
  }
