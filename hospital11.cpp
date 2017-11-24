#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<math.h>
 struct date
 	{ int d,m,y;
 		}dt1,dt2;

 	struct docter
 	{
      int ID;
	 }do1;


 struct patient
 {
      int age;
      char name[30],add[50],dis[50],refer[50],m;
      float e_fee;


  	 struct room
 		{
      		int price;
      		char room,pname[25],day;
 		}r;

	 struct treatment
  		{   int It;
         float mp,ip,tp,bp,total;
         char med,test,blood;
  		}t;
    struct bill
    {
       int day,room,ass;
       float d_charge,e_fee,r_charge,m_fee,total,dis,pay;
       char name;
    }b;
    }p1[10];






int main()
{   int type,i,j,opt1,opt3,opt2;
    float fee,tot,fp,rd,rp;
    char ch,opt,opt4,ch1,opt5;

    start:
    	system("cls");
    system("COLOR 70");
	printf("\n********************************************************************************************************************\n****************************************************WELCOME TO VIVEKANANDA HOSPITAL *********************************\n *************************************************** ESTD. IN 2015 **************************************************\n*********************************************************************************************************************");


    add:
    printf("\n Press 1 To know about doctor  \n Press 2 To Add patient \n Press 3 To know about patient \n Press 4  To know about billing \n Press other key to exit   :");
    scanf("\n %d",&opt1);
    
    if(opt1==3)
    goto det;

	if(opt1==1)
	{
			doctor:
    		printf("\n\n Press 1 for Gynecologist.\n Press 2 for Andrologists .\n Press 3 for Cardiologist . \n Press 4 for Dentist . \n Press 5 for Hepatologists  :");
    			scanf("%d",&opt3);
       
	   switch(opt3)
        {
             case 1: {
                           FILE *fptr;
                            char str[200];
                            fptr=fopen("C:/Users/BIRENDRA/Documents/2/Gynecologist.txt","r");
                            while(fgets(str,200,fptr)!=NULL)
                            puts(str);
                           fclose(fptr);

                        printf("\n******* WEL COME TO YOUR CHAMBER *******\n");
                           break;
                         }

             case 2:
                   {
                           FILE *fptr;
                            char str[200];
                            fptr=fopen("C:/Users/BIRENDRA/Documents/2/Andrologists.txt","r");
                            while(fgets(str,200,fptr)!=NULL)
                            puts(str);
                            fclose(fptr);

                            printf("\n******* WEL COME TO YOUR CHAMBER *******\n");
                            break;
                         }
            case 3:  {    
                           FILE *fptr;
                            char str[200];
                            fptr=fopen("C:/Users/BIRENDRA/Documents/2/Cardiologist.txt","r");
                            while(fgets(str,200,fptr)!=NULL)
                            puts(str);
                           fclose(fptr);

                            printf("\n******* WEL COME TO YOUR CHAMBER *******\n");
                           break;
                           }
            case 4:  {   
                           FILE *fptr;
                            char str[200];
                            fptr=fopen("C:/Users/BIRENDRA/Documents/2/Dentist.txt","r");
                            while(fgets(str,200,fptr)!=NULL)
                            puts(str);
                           fclose(fptr);

                           printf("\n******* WEL COME TO YOUR CHAMBER *******\n");
                           break;
                         }
            case 5 : {
                           FILE *fptr;
                            char str[200];
                            fptr=fopen("C:/Users/BIRENDRA/Documents/2/Hepatologists.txt","r");
                            while(fgets(str,200,fptr)!=NULL)
                            puts(str);
                           fclose(fptr);

                           printf("\n******* WEL COME TO YOUR CHAMBER *******\n");
                           break;
                         }
            default : printf("\n Wrong entry");
            			break;

           }

           		printf("\nDo you know about another doctor (Y/N):");
           		fflush(stdin);
           		scanf("%c",&opt4);

			if(opt4=='y' || opt4=='Y')
			{
			  system("cls");
			  goto doctor;
            }

			 else
			 {  system("cls");
                 goto add;
             }
         }

    if(opt1==2)
    {
	        system("cls");
			patient:
         for(i=0;i<10;i++)
          { 
               printf("\nWEL COME TO NEW PATIENT ENTRY");

		    date1:
             printf("\nEnter admission date: in the format(dd/mm/yyyy):");
             scanf("%d/%d/%d",&dt1.d,&dt1.m,&dt1.y);

             if(dt1.y>=2015 && dt1.y<2018)

             { if(dt1.m>0 && dt1.m<=12)

               { if(dt1.m==1 || dt1.m==3 || dt1.m==5 || dt1.m==7 || dt1.m==8 || dt1.m==10 || dt1.m==12)
                { if(dt1.d>0 && dt1.d<=31)
                  dt2=dt1;
                }

		   else
             if( dt1.m==4 || dt1.m==6 || dt1.m==9 || dt1.m==11)
              {
			    if(dt1.d>0 && dt1.d<=30)
                 dt2=dt1;
				   }
           else if(dt1.m==2)
              {
			    if(dt1.d>0 && dt1.d<29)
                  dt2=dt1;
              }


          	else
		  		{   printf("\n\a\a\aInvalid date. do you want to try again(y/n)? ");
		    	  	fflush(stdin);
		       		scanf("%c",&ch);
		       		if(ch=='y' || ch=='Y')
		        goto date1;
		     }}


		    else
		     {    printf("\a\a\aInvalid month. do you want to try again(y/n)? ");
		         fflush(stdin); scanf("%c",&ch);
		         if(ch=='y' || ch=='Y')
		         goto date1;
		     }
	       }

        else
		  {  printf("a\a\a\aInvalid year. \n do you want to try again(y/n)? :");
		     fflush(stdin);
			 scanf("%c",&ch);

		   if(ch=='y' || ch=='Y')
		    goto date1;
          }

           printf("%d/%d/%d",dt2.d,dt2.m,dt2.y);



        { FILE *fptr;
             char str[20];

		  	  fptr=fopen("C:/Users/BIRENDRA/Documents/2/date.txt","w");
		  	  
		  	  fprintf(fptr,"%d/%d/%d",dt2.d,dt2.m,dt2.y);
             	fclose(fptr);
            }

            printf("\n enter Patient ID:");
            fflush(stdin);
            scanf("%c",&p1[i].m);
           fflush(stdin);

		   printf("\n Enter your name:");
          
           { FILE *fptr;
             char str[20];

		  	  fptr=fopen("C:/Users/BIRENDRA/Documents/2/patient name (1).txt","w");
            	 printf("To stop entering ,\n press ctrl+z in Next line \n");

			  while(gets(str)!=NULL)
             	fputs(str,fptr);
             	fclose(fptr);
            }


			printf("\n enter your address:");
             { FILE *fptr;
            	 char str[20];
            	fptr=fopen("C:/Users/BIRENDRA/Documents/2/patient add (1).txt","w");

             	printf("To stop entering ,\n press ctrl+z in Next line \n");
              	while(gets(str)!=NULL)
             	fputs(str,fptr);
             	fclose(fptr);
            }


			 printf("\nIn Which disease you are suffered:");
             { FILE *fptr;
               char str[20];
            	fptr=fopen("C:/Users/BIRENDRA/Documents/2/patient disease (1).txt","w");

             	printf("To stop entering , \n press ctrl+z in Next line \n");
              	while(gets(str)!=NULL)
             	fputs(str,fptr);
             	fclose(fptr);
              }

             printf("\nenter your age:");
             { FILE *fptr;
               char str[20];
               f1:

				fptr=fopen("C:/Users/BIRENDRA/Documents/2/patient age (1).txt","w");
             	printf("To stop entering  \n press ctrl+z in Next line \n");
              	while(gets(str)!=NULL)
             	fputs(str,fptr);
             	fclose(fptr);
              }


            printf("\nEnter reference doctor's name:");

			 { FILE *fptr;
               char str[20];
            	fptr=fopen("C:/Users/BKB/Desktop/2/pp.txt","w");
             	printf("To stop entering \n press ctrl+z in Next line \n");
              	while(gets(str)!=NULL)
             	fputs(str,fptr);
             	fclose(fptr);
              }

        pee:


				printf("\nPay your entry fee 500: ");
             	scanf("%f",&p1[i].e_fee);


            if(p1[i].e_fee!=500)
             {
			  printf("\a\a\a\a\a");
              goto pee;}
              fp=p1[i].e_fee;
              system("cls");

          roo1:

             	printf("\n enter which room patient is preferred:\n press 1 for Normal room(rs. 300 for one day)\n press 2 for AC room (rs. 600 for one day)\n press 3 for ICU(rs. 2000 per day)\n press 4 for No room:");
             	scanf("%d",&p1[i].r.room);
               
               switch(p1[i].r.room)
                {
                  case 1: p1[i].r.price=300;
                          break;
                  case 2: p1[i].r.price=600;
                          break;
                  case 3: p1[i].r.price=2000;
                         break;
                  default : p1[i].r.price=0;

               }

                 printf("\n How many days doctor refers to stay:");
                 scanf("%d",&p1[i].r.day);


                 fee=p1[i].r.day*p1[i].r.price;
                 printf("Fees for Room=Rs. %f\nDays you stay=%d",fee,p1[i].r.day);


                 printf("\nWhich type of medicine:");
                 scanf("%s",&p1[i].t.med);
                 do{ j=0;
					printf("\nEnter price of medicine(between 1 to 10000):");
                    scanf("%f",&p1[i].t.mp);
                    if(p1[i].t.mp<0 || p1[i].t.mp>10000 )
                    j++;
                    printf("\a\a\a\a\a\a");
                   }while(j);

                   do
				 	{  j=0;

				   		printf("\n How many injection taken:(from 0 to 20):");
                   		scanf("%d",&p1[i].t.It);
                     	if(p1[i].t.It<0 || p1[i].t.It>20 )
                    	j++;
                    	 printf("\a\a\a\a\a\a");
                   }while(j);


				 do
                    { j=0;

				     printf("\n Enter price of injection(between 10 to 1000):");
                     scanf("%f",&p1[i].t.ip);
                      
                      if(p1[i].t.ip<10 || p1[i].t.ip>1000 )
                      j++;
                     
                     printf("\a\a\a\a\a\a");
                     }while(j);




                printf("\nEnter the name of test:");
                scanf("%s",&p1[i].t.test);

				do
                    {
                         j=0;
				      printf("\nEnter price of the test(from 0 to 10000):");
                     scanf("%f",&p1[i].t.tp);
 				    if(p1[i].t.tp<0 || p1[i].t.tp>10000 )
                    j++;
                     printf("\a\a\a\a\a\a");
                   }while(j);


                do
                    { j=0;

				      printf("\nEnter price of blood per liter if taken (from 00 to 5000):");
                      scanf("%f",&p1[i].t.bp);
					  if(p1[i].t.bp<0 || p1[i].t.bp>5000 )
                      j++;
                      printf("\a\a\a\a\a\a");
                     }while(j);


                    p1[i].t.total=p1[i].t.mp+p1[i].t.ip*p1[i].t.It+p1[i].t.tp+p1[i].t.bp;
                    printf("\nTotal Treatment expenditure= %.2f",p1[i].t.total);
                    tot=p1[i].t.total;
                    
                    printf("\n do you want to add another record(y/n):");
                    fflush(stdin);
                    scanf("%c",&opt5);
                    
                    if(opt5=='y' || opt5=='Y')
                    continue;
                    else
                    break;

            }
      }

    if(opt1==3)
    {
            det:
                   printf("\n Patient details:\n");
                   printf("ID=%d",p1[i].m);
                   printf("\n \n Arrival date=");
                  
                   
                   { FILE *fptr;
                            char str[200];
                            fptr=fopen("C:/Users/BIRENDRA/Documents/2/date.txt","r");
                            while(fgets(str,200,fptr)!=NULL)
                            puts(str);
                           fclose(fptr);}
                           
                     printf("\n Patient name:");
                   
                   { FILE *fptr;
                            char str[200];
                            fptr=fopen("C:/Users/BIRENDRA/Documents/2/patient name (1).txt","r");
                            while(fgets(str,200,fptr)!=NULL)
                            puts(str);
                           fclose(fptr);}

                    
                    printf("\n Patient Address:");
                    
                     {
					    FILE *fptr;
                            char str[200];
                            fptr=fopen("C:/Users/BIRENDRA/Documents/2/patient add (1).txt","r");
                            while(fgets(str,200,fptr)!=NULL)
                            puts(str);
                           fclose(fptr);}

                        printf("\n Patient disease:");
                       
                       {
					   	FILE *fptr;
                            char str[200];
                            fptr=fopen("C:/Users/BIRENDRA/Documents/2/patient disease (1).txt","r");
                            while(fgets(str,200,fptr)!=NULL)
                            puts(str);
                           fclose(fptr);}

                        printf("\n patient age:");
                      
                      {
                        FILE *fptr;
                            char str[200];
                            fptr=fopen("C:/Users/BIRENDRA/Documents/2/patient age (1).txt","r");
                            while(fgets(str,200,fptr)!=NULL)
                            puts(str);
                           fclose(fptr);}

						printf("\n entry fee=Rs.500\n");

						printf("Reference doctors name:");

                        {
						    FILE *fptr;
                            char str[200];
                            fptr=fopen("C:/Users/BIRENDRA/Documents/2/patient reference (1).txt","r");
                            while(fgets(str,200,fptr)!=NULL)
                            puts(str);
                           fclose(fptr);}


        }

    if(opt1==4)
       {

         
             printf("\nWel come to billing:");
               printf("ID=%d",p1[i].m);
               
                    printf("\n Patient name:");
                   
                   { FILE *fptr;
                            char str[200];
                            fptr=fopen("C:/Users/BIRENDRA/Documents/2/patient name (1).txt","r");
                            while(fgets(str,200,fptr)!=NULL)
                            puts(str);
                           fclose(fptr);}
                           
                           
             p1[i].b.total=fp+tot+rd*fee+500;
             p1[i].b.dis=p1[i].b.total*.15;
             p1[i].b.pay=p1[i].b.total-p1[i].b.dis;
			 printf("\n\nYour total bill =Rs.%.2f",p1[i].b.total);


		      { FILE *fptr;
             char str[20];
             fptr=fopen("C:/Users/BIRENDRA/Documents/2/patient name (2).txt","w");
             fprintf(fptr,"%.2f%",p1[i].b.total);
             fputs(str,fptr);
             fclose(fptr);
            }

		    { FILE *fptr;
             char str[20];
             fptr=fopen("C:/Users/BIRENDRA/Documents/2/patient name (3).txt","w");
             fprintf(fptr,"%.2f%",p1[i].b.dis);
             fputs(str,fptr);
             fclose(fptr);
            }

            { FILE *fptr;
             char str[20];
             fptr=fopen("C:/Users/BIRENDRA/Documents/2/patient name (4).txt","w");
             fprintf(fptr,"%.2f%",p1[i].b.pay);
             fputs(str,fptr);
             fclose(fptr);
            }
       }
       
       
      


       printf("\nDo you want to go to start(Y/N):");
       fflush(stdin);
       scanf("%c",&ch1);
       if(ch1=='y' || ch1=='Y')
       goto start;
       else
       printf("\n\n******* Thank You for visiting **********");
     return 0;
    }


