#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct  dir
{
  char dir_name[50];
  char files[50][50];
};
struct dir d[50];
void menu()
{
  printf("\n1.Create Directory");
  printf("\n2.Create File");
  printf("\n3.Display files");
  printf("\n4.Delete directory");
  printf("\n5.Delete file");
  printf("\n6.Search");
  printf("\n0.EXIT");
  printf("\nEnter your choice=");
  int option;
  char dir_name[50],file_name[50];
  scanf("%d",&option);
  switch(option)
  {
    case 0: exit(0);
            break;
    case 1: printf("Enter the name of the directory=");
            scanf("%s",dir_name);
            for(int i=0;i<50;i++)
              if(strcmp(d[i].dir_name,"\0")==0)
              {
                strcpy(d[i].dir_name,dir_name);
                menu();
              }
            printf("NO MORE SPACE LEFT");
            break;
    case 2: printf("Select directory to store file=");
            scanf("%s",dir_name);
            for(int i=0;i<50;i++)
            {
              if(strcmp(d[i].dir_name,dir_name)==0)
              {
                printf("Enter the filename=");
                scanf("%s",file_name);
                for(int j=0;j<50;j++)
                  if(strcmp(d[i].files[j],"\0")==0)
                  {
                    strcpy(d[i].files[j],file_name);
                    printf("FILE CREATED");
                    menu();
                  }
              }
            }
            printf("DIRECTORY DOES NOT EXIST");
            break;
      case 3: printf("Select directory to display files=");
              scanf("%s",dir_name);
              for(int i=0;i<50;i++)
              {
                if(strcmp(d[i].dir_name,dir_name)==0)
                {
                  for(int j=0;j<50;j++)
                      if(strcmp(d[i].files[j],"\0")!=0)
                        printf("%s\n",d[i].files[j]);
                  menu();
                }
              }
              printf("DIRECTORY DOES NOT EXIST");
              break;
      case 4: printf("Select directory to delete=");
              scanf("%s",dir_name);
              for(int i=0;i<50;i++)
                if(strcmp(d[i].dir_name,dir_name)==0)
                {
                  strcpy(d[i].dir_name,"\0");
                  printf("DIRECTORY DELETED");
                  menu();
                }
              break;
      case 5: printf("Select directory to delete file=");
              scanf("%s",dir_name);
              for(int i=0;i<50;i++)
                {
                  if(strcmp(d[i].dir_name,dir_name)==0)
                  {
                    printf("Enter the filename=");
                    scanf("%s",file_name);
                    for(int j=0;j<50;j++)
                      if(strcmp(d[i].files[j],file_name)==0)
                      {
                        strcpy(d[i].files[j],"\0");
                        printf("FILE DELETED");
                        menu();
                      }
                    printf("FILE DOES NOT EXIST");
                    menu();
                  }
                }
              printf("DIRECTORY DOES NOT EXIST");
              break;
        case 6: printf("Enter file to search for=");
                scanf("%s",file_name);
                for(int i=0;i<50;i++)
                {
                  for(int j=0;j<50;j++)
                  {
                    if(strcmp(d[i].files[j],file_name)==0)
                    {
                      printf("File '%s' found in dir '%s'\n",file_name,d[i].dir_name);
                      strcpy(dir_name,"#FOUND");
                    }
                  }
                }
                if(strcmp(dir_name,"#FOUND")!=0)
                  printf("FILE NOT FOUND");
                break;
        default: menu();
  }
  menu();
}
int main()
{
  menu();
  return 0;
}
