#include <stdio.h>
int mutex=1,full=0,empty,n,a[10],x=1,i=1;
int wait(int s)
{
 return(--s); 
}
int signal(int s)
{
 return(++s);
}
void producer()
{
  if((mutex==1)&&(empty!=0))
  {
    mutex=wait(mutex);
    full=signal(full);
    empty=wait(empty);
    printf("\nProducer produces the item:");
    scanf("%d",&a[i]);
    i++;
    mutex=signal(mutex);
  }
  else
  {
    printf("BUFFER IS FULL...");
    choice();
  }

}
void consumer()
{
  if((mutex==1)&&(full!=0))
  {
   mutex=wait(mutex);
    full=wait(full);
    empty=signal(empty);
    if(x<=i)
    { 
      printf("\nConsumer consumes the item: %d",a[x]);
      
    }
    x++;
    mutex=signal(mutex); 
  }
  else
  {
    printf("BUFFER IS EMPTY...");
    choice();
  }
}
int choice()
{
  do
   {
    printf("\n1.Producer\n2.Consumer\n3.Exit\nEnter choice : ");
    scanf("%d",&n);
    switch(n)
     {
      case 1 : producer();
               break;
      case 2 : consumer();
               break;

      case 3 : 
               break;
     }
   }while(n!=3);
 return 0;
}
int main()
{
  printf("Enter the limit: ");
  scanf("%d",&empty);
  choice(); 
  return 0;
}