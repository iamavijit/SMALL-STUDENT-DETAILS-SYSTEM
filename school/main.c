#include<stdio.h>
#include<stdlib.h>
                     typedef struct sch{
                                     char name[30];
                                                   char sec[5];
                                                         int roll;
                                             float cgpa;
                              int rankinclass;
                          }data;
       int main(void){
 FILE *fp;
            data *s;
 int n,i,year,class;
        char b[50];
               printf("Please enter the file name : ");
    scanf("%s",b);
                       fp=fopen(b,"w+");
       if(fp==NULL){
                       printf("ERROR OPENING FILE!!\n");
                          exit(0);
    }
                else{
                        printf("FILE OPENED SUCCESSFULLY!!!\n");
             printf("enter the number of students : " );
                                 scanf("%d",&n);
                      s=(data *)malloc(n*sizeof(data));

 printf("ENTER YEAR :");
          scanf("%d",&year);
                   printf("enter class :");
            scanf("%d",&class);

      for(i=0;i<n;i++){
                          printf("Enter the name %d:",i+1);
        scanf("%s",s[i].name);
               printf("SECTION = ");
       scanf("%s",s[i].sec);
                                     printf("roll:");
                scanf("%d",&s[i].roll);
                                             printf("cgpa=");
                                  scanf("%f",&s[i].cgpa);
          printf("enter the rank in the class : ");
                                                 scanf("%d",&s[i].rankinclass);

}
                   fprintf(fp,"...............year %d.................\n............... class-%d.................\n",year,class);

                     for(i=0;i<n;i++){
                fprintf(fp,"NAME=%s\nsection=%s\nroll number=%d\ncgpa=%f\nrank in the class=%d\n",s[i].name,s[i].sec,s[i].roll,s[i].cgpa,s[i].rankinclass);
              }
                       }
          free(s);
                       fclose(fp);
 return 0;
}
