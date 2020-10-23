#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int locations[30],locations2[35],n,n2,end,head;
bool served[30];
bool completed()
{
    for(int i=0;i<n;i++)
        if(served[i]==false)
            return false;
    return true;
}
int time()
{
    int sum=0;
    for(int i=0;i<n2-1;i++)
        sum=sum+abs(locations2[i]-locations2[i+1]);
    return sum;
}
void sort()
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(locations[j]>locations[j+1])
            {
                int temp=locations[j];
                locations[j]=locations[j+1];
                locations[j+1]=temp;
            }
 }
void fcfs()
{
    printf("THE ORDER IS:\n%d->",head);
    for(int i=0;i<n;i++)
      {
        printf("%d->",locations[i]);
        locations2[i+1]=locations[i];
      }
}
void scan()
{
     sort();
    printf("HEAD MOVES FROM L TO R\nTHE ORDER IS:\n%d->",head);
    int i=0,temp=-1,q=0;
    while(locations[i]<head)
        i++;
    temp=i;
    while(i!=n)
    {
        printf("%d->",locations[i]);
        locations2[q+1]=locations[i];
        q++;
        i++;
    }
    printf("%d->",end);
    n2++;
    locations2[q+1]=end;
    q++;
    i=temp;
    if(temp-1>=0)
        i=temp-1;
        
    while(i>=0)
    {
        printf("%d->",locations[i]);
        locations2[q+1]=locations[i];
        q++;
        i--;
    }
}
void cscan()
{
    sort();
    int q=0;
    printf("HEAD MOVES FROM L TO R\nTHE ORDER IS:\n%d->",head);
    int i=0,temp=-1;
    while(locations[i]<head)
        i++;
    while(i!=n)
    {
        printf("%d->",locations[i]);
        locations2[q+1]=locations[i];
        q++;
        i++;
    }
    printf("%d->0->",end);
    locations2[q+1]=end;
    q++;
    n2++;
    i=0;
    n2++;
    locations2[q+1]=0;
    q++;
    while(locations[i]<head)
    {
        printf("%d->",locations[i]);
        locations2[q+1]=locations[i];
        q++;
        i++;
    }
}
void menu()
{
    char string[100],temp[10];
    int input,i=0,j=0,k=0;
    for(int q=0;q<30;q++)
        served[q]=false;
    printf("\n\nEnter final position of the disk: ");
    scanf("%d",&end);
    printf("\nEnter locations: ");
    fgets(string,100,stdin);
    fgets(string,100,stdin);
    while(string[i]!='\0')
    {
        if(string[i]==' ')
        {
            sscanf(temp, "%d", &locations[j]);
            strcpy(temp,"");
            k=0;
            j++;
        }
        else
            temp[k++]=string[i];
        i++;
    }
    sscanf(temp, "%d", &locations[j]);
    n=j+1;
    n2=n+1;
    printf("Enter head location: ");
    scanf("%d",&head);  
    printf("\n1.FCFS\n2.SCAN\n3.CSCAN\nSELECT AN ALGORITHM: ");
    scanf("%d",&input);
    printf("\n\n");
    locations2[0]=head;
    switch(input)
    {
        case 1:fcfs();
            break;
        case 2:scan();
            break;
        case 3:cscan();
            break;
        default:menu();
    }
    printf("STOP");
    printf("\n\nSEEK TIME: %d",time());
    printf("\nAVERAGE SEEK TIME: %d",time()/n);
    menu();
}
void main()
{
    menu();
}