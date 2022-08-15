#include<stdio.h>

int main()
{
   char name_subject[20][20];
   int i;
   int credit[5];
   int no_subject;
   int total_score[50];
   float quality_point[50],pointer[11];
   float total_quality_point=0;
   float GPA;
   float total_credit=0;




   printf("==================================================");
   printf("\nProgram: GPA CALCULATOR");
   printf("\nAuthor: ");
   printf("Nur Afiqah Binti Abdullah");
   printf("\n==================================================");
   printf("\n\nNumber of subjects this semester: ");
   scanf("%d",&no_subject);

   for(i=1;i<=no_subject;i++)
   {
       printf("\nName of Subject %d: ",i);
       scanf(" %[^\n]s",&name_subject[i]);
       printf("Credit Hours: ");
       scanf("%d",&credit[i]);
       printf("Total Score: ");
       scanf("%d",&total_score[i]);
       total_credit=total_credit+credit[i];
       if(total_score[i]<0 || total_score[i]>100)
        {
          do
            { printf("ERROR! Invalid score!");
              printf("\nPlease enter the Total Score again: ");
              scanf("%d",&total_score[i]);
            }while(total_score[i]<=0 || total_score[i]>=100);
        }
   }

   printf("\nYour Results:\n\n");
   printf("==================================================\n");
   printf("INDEX\tSUBJECT\tCREDIT\tSCORE\tGRADE\tPOINT");
   printf("\n\n==================================================");
   for(i=1;i<=no_subject;i++)
   {

     printf("\n%d\t%s\t%d\t%d ",i,name_subject[i], credit[i], total_score[i]);

   if(total_score[i]>=80 && total_score[i]<=100)
   {
      printf("\tA ");
      pointer[0]=4.00;
      printf("\t%0.2f", pointer[0]);
      quality_point[i]=4.0*credit[i];
   }

   else if(total_score[i]>=75 && total_score[i]<=79)
   {
      printf("\tA-");
      pointer[1]=3.70;
      printf("\t%0.2f", pointer[1]);
      quality_point[i]=3.7*credit[i];
   }

   else if(total_score[i]>=70 && total_score[i]<=74)
   {
      printf("\tB+");
      pointer[2]=3.30;
      printf("\t%0.2f", pointer[2]);
      quality_point[i]=3.3*credit[i];
   }

   else if(total_score[i]>=65 && total_score[i]<=69)
   {
      printf("\tB ");
      pointer[3]=3.00;
      printf("\t%0.2f", pointer[3]);
      quality_point[i]=3.0*credit[i];
   }

   else if(total_score[i]>=60 && total_score[i]<=64)
   {
      printf("\tB-");
      pointer[4]=2.70;
      printf("\t%0.2f", pointer[4]);
      quality_point[i]=2.7*credit[i];
   }

   else if(total_score[i]>=55 && total_score[i]<=59)
   {
      printf("\tC+");
      pointer[5]=2.30;
      printf("\t%0.2f", pointer[5]);
      quality_point[i]=2.3*credit[i];
   }

   else if(total_score[i]>=50 && total_score[i]<=54)
   {
      printf("\tC ");
      pointer[6]=2.00;
      printf("\t%0.2f", pointer[6]);;
      quality_point[i]=2.0*credit[i];
   }

   else if(total_score[i]>=47 && total_score[i]<=49)
   {
      printf("\tC-");
      pointer[7]=1.70;
      printf("\t%0.2f", pointer[7]);
      quality_point[i]=1.7*credit[i];
   }

   else if(total_score[i]>=44 && total_score[i]<=46)
   {
      printf("\tD+");
      pointer[8]=1.30;
      printf("\t%0.2f", pointer[8]);
      quality_point[i]=1.3*credit[i];
   }

   else if(total_score[i]>=40 && total_score[i]<=43)
   {
      printf("\tD ");
      pointer[9]=1.00;
      printf("\t%0.2f", pointer[9]);
      quality_point[i]=1.0*credit[i];
   }

   else if(total_score[i]>=0 && total_score[i]<=39)
   {
      printf("\tE ");
      pointer[10]=0.00;
      printf("\t%0.2f", pointer[10]);
      quality_point[i]=0.0*credit[i];
   }
   total_quality_point=total_quality_point+quality_point[i];

   }
   printf("\n==================================================\n");

   GPA=total_quality_point/total_credit;
   printf("Your GPA for this semester: %0.2f\n\n",GPA);
   printf("==================================================");





}
