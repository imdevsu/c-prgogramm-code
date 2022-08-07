


include <stdio.h>

int main()

{          float marks;
   
    printf("enter your number");
    scanf("%f",&marks);
    
   if(marks>=30 && marks<=70) 
   {printf("c Grade ");
   }
   else if (marks>=71 && marks<=91) 
   {
   printf("B Grade");
   }
   
   else if (marks>=91 && marks<=100)
   {printf("A Grade");
   } 
   else 
  
  {printf("invalid Number Please Enter Correct Number");
  }

    return 0;
}
