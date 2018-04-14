/*------------------------------------------------------
Student's Name: Utkarsh Chaudhary
Student's email address: uc129@uowmail.edu.au
Lab group (CLA/01, CLA/02,...): CLA 02
Purpose of this assignment: To get familiarized with Switch Case statement and also to develop problem solving abilities.
-------------------------------------------------------*/ 

#include <stdio.h>
#include <math.h> /* To include math functions like pow and sqrt */
#include <stdlib.h> /* To include the exit() statement */

/**************************Function Declartation******************************/
int strlen(char[]);
int isFloat(char x[10]); /* Decleration of a  function to find if the entered vector is numeric or not. */
/*********************************************************************************/

int main(void)
{

/*********************************************Local Variable Declaration**********************************************************************/
char ch; /* The choice in switch case*/
int i,j=1;  /* variables used in the loops. 'j' is initialised to be one. */
int k=0;
int opt; /* To check wether the entered option is correct*/
int tx=0,ty=0;

char cx1[10],cy1[10],cx2[10],cy2[10]; /* Declaration of variables for the vectors*/
float x1, x2, y1, y2;

float xsum=0; /* For the sum of x-coordinates */
float ysum=0;/* For the sum of y-coordinates */

float xdif=0; /* For the difference between x-coordinates */
float ydif=0;/* For the difference between y-coordinates */
float sdif=0; /* Sum of squares of difference between vectors */

float xdif2,ydif2,eudis=0; /* For the square difference between x & y-coordinates, and for eucladian distance. */

/*************************************************************************************************************************************************/

while(j>0)  /* The loop will run till 'j' is greater than 0, OR otherwise terminated */
{

   for (i=1;i<=4;i++)  /******** Loop to check validity of the menu choice entered. The loop runs a maximum of three times to give the user three chances to enter a right menu choice.******/
    {

           printf("\n Enter Your Choice: \n 1 for ADDITION \n 2 for SUBSTRACTION \n 3 for Euclidian Distance \n 4 to exit");
           scanf("%d", &opt); 

           ch=opt;        /* The integer choice input by the user is converted to char type by implicit conversion */

          if (opt>0 && opt<5) {    /* if the entered choice is in the range of available choices, the loop stops and the program moves on*/
                break;
                 } 

          if (i==3) {
               printf("Error: You didnot make a valid choice. Program is exiting \n");   /* When the loop has run thrice, and the choice made is not correct, the program terminates */
               exit(0);
               }

          else {
                  printf("Try again \n"); 
    
                  }


     }


  switch (ch)   /* This statement chooses which statements to run based on the choice made earlier*/
  {

     case 1:   while(k!=1)
	  {	
	   	printf(" \n Enter first vector in the format x y:");     /* Requesting first vector input*/
                    	scanf("%s", cx1);
	    	scanf("%s", cy1);
	 
		tx=isFloat(cx1);         /* The isFloat function is called to check if the string is float or not. */
		ty=isFloat(cy1);

		if (tx==1 && ty==1){             /* The isFloat function returns 1 if the string is float or zero is non-numeric characters entered. */
		         k=1;
		}

		else{
		        k=0;
		        printf("\n Non-Numeric value entered.");
		        }	
	
		       
	 }

	    k=0;  /* Here, k is reset to be zero, to run the next loop. */

	    while(k!=1)
	  {	
	   	printf("\n Enter second vector in the format x y:");     /* Requesting first vector input*/
                    	scanf("%s", cx2);
	    	scanf("%s", cy2);
		
		tx=isFloat(cx2);
		ty=isFloat(cy2);

		if (tx==1 && ty==1){
		         k=1;
		}

		else{
		        k=0;	
		        printf("\n Non-Numeric value entered.");
		        }	
	
		       
	 }

	    k=0;


	   
	    x1=atof(cx1);   /* atof function is used to extract the numeric data from a string. */
	    x2=atof(cx2);
	    y1=atof(cy1);
	    y2=atof(cy2);

              	  xsum=x1+x2;  /* Adding the x-coordinates */
	  ysum=y1+y2;  /* Adding the y-coordinates */

                  printf("(%.2f,%.2f )+ (%.2f,%.2f) = (%.2f,%.2f) ",x1,y1,x2,y2,xsum,ysum);  /* The result gets printed here. */

	  break; /* To break out of switch case. */

     case 2:    while(k!=1)
	  {	
	   	printf("\n Enter first vector in the format x y:");     /* Requesting first vector input*/
                    	scanf("%s", cx1);
	    	scanf("%s", cy1);

		tx=isFloat(cx1);
		ty=isFloat(cy1);

		if (tx==1 && ty==1){
		         k=1;
		}

		else{
		        k=0;	
		        printf("\n Non-Numeric value entered.");
		        }	
	
		       
	 }

	    k=0; 
	

	    while(k!=1)
	  {	
	   	printf("\n Enter second vector in the format x y:");     /* Requesting first vector input*/
                    	scanf("%s", cx2);
	    	scanf("%s", cy2);
		
		tx=isFloat(cx2);
		ty=isFloat(cy2);

		if (tx==1 && ty==1){
		         k=1;
		}

		else{
		        k=0;	
		        printf("\n Non-Numeric value entered.");
		        }	
	
		       
	 }

	    k=0;


	    x1=atof(cx1);
	    x2=atof(cx2);
	    y1=atof(cy1);
	    y2=atof(cy2);


	  xdif=x1-x2;
	  ydif=y1-y2;
	
	  printf("(%.2f,%.2f) - (%.2f,%.2f) = (%.2f,%.2f) ",x1,y1,x2,y2,xdif,ydif);
	  break;

     case 3:   while(k!=1)
	        {	
	   	printf("\n Enter first vector in the format x y:");     /* Requesting first vector input*/
            		scanf("%s", cx1);
	    	scanf("%s", cy1);
		
		    tx=isFloat(cx1);
		    ty=isFloat(cy1);

		    if (tx==1 && ty==1){
		         k=1;
		    }

		    else{
		        k=0;	
		        printf("\n Non-Numeric value entered.");
		        }	
	
		       
	      }

	    k=0;


			

	    while(k!=1)
	  {	
	   	printf("\n Enter second vector in the format x y:");     /* Requesting first vector input*/
                    	scanf("%s", cx2);
	    	scanf("%s", cy2);
		
		tx=isFloat(cx2);
		ty=isFloat(cy2);

		if (tx==1 && ty==1){
		         k=1;
		}

		else{
		        k=0;	
		        printf("\n Non-Numeric value entered.");
		        }	
	
		       
	 }

	    k=0;



	    x1=atof(cx1);
	    x2=atof(cx2);
	    y1=atof(cy1);
	    y2=atof(cy2);

	  xdif=x1-x2;
	  ydif=y1-y2;

	  xdif2=pow(xdif,2); /* Squaring the difference between x-coordinate*/
	  ydif2=pow(ydif,2);  /* Squaring the difference of between y-coordinate*/
	  sdif=xdif2+ydif2;

	  eudis=sqrt(sdif);   /* Finding the Eucladian distance by adding the squares of the difference between the vectors and then finding it's square root. */

	  printf("Eucladian distance between (%.2f,%.2f) & (%.2f,%.2f) is: %.2f ",x1,y1,x2,y2,eudis);
	  break;

     case 4:      printf("\n Thank You for using this program\n ");  /* Exiting the Program*/
	      exit(0); /* To terminate the program*/

     default:     ;

   }
}
 
return (0);
}


int isFloat(char x[10])  /* A function to check if the vectors input byy the user are numeric or not*/
{
int t=0,i;
int c=0,d=0,e=0;
int length;

length =strlen(x);    /* strlen() finds out the lengthy of the input vector */

       for (i=0; i<length;i++)
       {

	if (x[i]>='0' && x[i]<='9'){    /* The input is checked character by character,  if digit a counter counts the no of digits.*/
	c=c+1;
	}
	else if (x[i]=='.'){   /* Checking for decimal point. */
	d=d+1;
	}
	
	else if (x[i]=='-'){    /* Checking for negative sign*/
	e=e+1;
	}


         }


        if (c==length){         /* if the counter equals the length of the string, the whole input is numeric else, false is returned and the user is required to enter a vector again. */
        t=1;
	}
       else if(d>1 || e>1){   /* There should only be a max no of one character of  '.'  OR '-'. Hence, if more than one entered the user is prompted to input again. */
       t=0;
       }

       else if (c+d+e==length){    
       t=1;
         }
	
      
       else{
       t=0;
       }
       

return(t);

}
























