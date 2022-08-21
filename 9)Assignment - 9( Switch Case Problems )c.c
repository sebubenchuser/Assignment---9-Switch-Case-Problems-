
                                          //Assignment - 9( Switch Case Problems )

// 1. Write a program which takes the month number as an input and display number of days in that month.

   /*#include<stdio.h>
   int main()
   {
       int n;
       printf("Enter a month number");
       scanf("%d",&n);
       switch(n)
       {
           case 1:
           printf("31");
           break;
           case 2:
           printf("28");
           break;
           case 3:
           printf("31");
           break;
           case 4:
           printf("30");
           break;
           case 5:
           printf("31");
           break;
           case 6:
           printf("30");
           break;
           case 7:
           printf("31");
           break;
           case 8:
           printf("31");
           break;
           case 9:
           printf("30");
           break;
           case 10:
           printf("31");
           break;
           case 11:
           printf("30");
           break;
           case 12:
           printf("31");
       }
   }*/

/*2. Write a menu driven program with the following options: a. Addition
    b. Subtraction
    c. Multiplication
   d. Division
    e. Exit*/

    /*#include<stdio.h>                              //some doubt
    #include<conio.h>
    int main()
    {
        int i;
        char n;
        while(i>0)
        {
            printf("select the menu\n");
            printf("a.Addition\nb.subtraction\nc.Multiplication\nd.Division\ne.Exit");
            printf("\n\n###################################\n");
            scanf("%c",&n);
            switch(n)
            {
                case 'a':
                {
                    int a,b;
                    printf("Enter two number");
                    scanf("%d%d",&a,&b);
                    printf("%d\n",a+b);
                    break;
                }

                case 'b':
                {
                    int a,b;
                    printf("Enter two number");
                    scanf("%d%d",&a,&b);
                    printf("%d\n",a-b);
                    break;
                }
                case 'c':
                {
                    int a,b;
                    printf("Enter two number");
                    scanf("%d%d",&a,&b);
                    printf("%d\n",a*b);
                    break;
                }
                case 'd':
                {
                    int a,b;
                    printf("Enter two number");
                    scanf("%d%d",&a,&b);
                    printf("%d\n",a/b);
                    break;
                }
                case 'e':
                {
                    i=0;
                    break;
                }
            }
        }

    }*/

    /*#include<stdio.h>                //this is ok.
    #include<conio.h>
    int main()
    {
        int i,n;
        while(i>0)
        {
            printf("select the menu\n");
            printf("1.Addition\n2.subtraction\n3.Multiplication\n4.Division\n5.Exit");
            printf("\n\n###################################\n");
            scanf("%d",&n);
            switch(n)
            {
                case 1:
                {
                    int a,b;
                    printf("Enter two number");
                    scanf("%d%d",&a,&b);
                    printf("%d\n",a+b);
                    break;
                }

                case 2:
                {
                    int a,b;
                    printf("Enter two number");
                    scanf("%d%d",&a,&b);
                    printf("%d\n",a-b);
                    break;
                }
                case 3:
                {
                    int a,b;
                    printf("Enter two number");
                    scanf("%d%d",&a,&b);
                    printf("%d\n",a*b);
                    break;
                }
                case 4:
                {
                    float a,b;
                    printf("Enter two number");
                    scanf("%f%f",&a,&b);
                    printf("%f\n",a/b);
                    break;
                }
                case 5:
                {
                    i=0;
                    break;
                }
            }
        }

    }*/

//3. Write a program which takes the day number of a week and displays a unique greeting message for the day.

/*#include<stdio.h>
int main()
{
int n;
printf("Enter the day number of a week");
scanf("%d",&n);
switch (n)
{
    case 1:
    {
        printf("Today is Sunday");
        break;
    }
    case 2:
    {
        printf("Today is Monday");
        break;
    }
    case 3:
    {
        printf("Today is Tuesday");
        break;
    }
    case 4:
    {
        printf("Today is Wednesday");
        break;
    }
    case 5:
    {
        printf("Today is Thusday");
        break;
    }
    case 6:
    {
        printf("Today is Friday");
        break;
    }
    case 7:
    {
        printf("Today is Saturday");
        break;
    }
}
}*/


/*4. Write a menu driven program with the following options: a. Check whether a given set of three numbers are
    lengths of an isosceles triangle or not
    b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not           //some doubt
    c. Check whether a given set of three numbers are equilateral triangle or not
    d. Exit */

    /*#include<stdio.h>
    int main()
  {
        int a,b,c,i;
        char x;

        while(i>0)
 {
     printf("\n######################################>>>>>>>>>>>>>>>>###################\n\n\n");
     printf("a Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
        printf("b Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
        printf("c Check whether a given set of three numbers are equilateral triangle or not\n");
        printf("d Exit\n");
        fflush(stdin);
        scanf("%c",&x);
        switch(x!='d')
        {
            case 1:
        printf("Enter 3 side of triangle");
        scanf("%d%d%d",&a,&b,&c);
        }
        switch(x)
    {
            case 'c':
        {
         switch(a==b&&b==c&&c==a)
          {
            case 1:
              {
                printf("triangle is equilateral triangle ");
                break;
              }
            case 0:
              {
                printf("triangle is not equilateral triangle");
                break;
              }
          }
        break;
        }

        case 'a':
        {
          switch(a==b||b==c||c==a)
                {
                    case 1:
                    {
                        printf("triangle is isosceles triangle");
                        break;
                    }
                    case 0:
                    {
                        printf("triangle is not isosceles triangle");
                        break;
                    }
                }
                break;
        }
        case 'b':
        {
         x=a>b?a:b;
         x=x>c?x:c;
         switch(x*x==a*a+b*b||x*x==b*b+c*c||x*x==a*a+c*c)
         {
             case 1:
             {
                 printf("triangle is right angle");
                 break;
             }
             case 0:
             {
                printf("triangle is not right angle");
                 break;
             }
         }
         break;
        }
        case 'd':
        {
            i=0;
            break;
        }
    }
 }
}  */

/*#include<stdio.h>                      //this is ok
    int main()
  {
        int a,b,c,i;
        int x;

        while(i>0)
 {
     printf("\n######################################>>>>>>>>>>>>>>>>###################\n\n\n");
     printf("1 Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
        printf("2 Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
        printf("3 Check whether a given set of three numbers are equilateral triangle or not\n");
        printf("4 Exit\n");
        fflush(stdin);
        scanf("%d",&x);
        switch(x!=4)
        {
            case 1:
        printf("Enter 3 side of triangle");
        scanf("%d%d%d",&a,&b,&c);
        }
        switch(x)
    {
            case 3:
        {
         switch(a==b&&b==c&&c==a)
          {
            case 1:
              {
                printf("triangle is equilateral triangle ");
                break;
              }
            case 0:
              {
                printf("triangle is not equilateral triangle");
                break;
              }
          }
        break;
        }

        case 1:
        {
          switch(a==b||b==c||c==a)
                {
                    case 1:
                    {
                        printf("triangle is isosceles triangle");
                        break;
                    }
                    case 0:
                    {
                        printf("triangle is not isosceles triangle");
                        break;
                    }
                }
                break;
        }
        case 2:
        {
         x=a>b?a:b;
         x=x>c?x:c;
         switch(x*x==a*a+b*b||x*x==b*b+c*c||x*x==a*a+c*c)
         {
             case 1:
             {
                 printf("triangle is right angle");
                 break;
             }
             case 0:
             {
                printf("triangle is not right angle");
                 break;
             }
         }
         break;
        }
        case 4:
        {
            i=0;
            break;
        }
    }
 }
} */

/*5. Convert the following if-else-if construct into switch case:
    if(var == 1)
     System.out.println("good");
    else if(var == 2)
    System.out.println("better");
     else if(var == 3)
    System.out.println("best");
     else
    System.out.println("invalid"); */

    /*#include<stdio.h>
    int main()
    {
        int var;
        scanf("%d",&var);
        switch(var==1)
        {
            case 1:
            {
                printf("good");
              break;
            }
            case 0:
            {
                switch(var==2)
                {
                    case 1:
                    {
                      printf("better");
                      break;
                    }
                    case 0:
                    {
                        switch(var==3)
                        {
                            case 1:
                            {
                                printf("best");
                                break;
                            }
                            case 0:
                            {
                                printf("invalid");
                                break;
                            }

                        }
                      break;
                    }
                }
                break;
            }

        }
    }*/

//6. Program to check whether a year is a leap year or not. Using switch statement

   /*#include<stdio.h>
   int main()
   {
       int n;
       printf("Enter a year");
       scanf("%d",&n);
       switch(n%100==0)
       {
           case 1:
           {
             switch(n%400==0)
             {
             case 1:
             {
                 printf("Year is leap year");
                 break;
             }
             case 0:
             {
                 printf("Year is not leap year");
                 break;
             }

           }
           break;
           }
           case 0:
           {
             switch(n%4==0)
             {
                 case 1:
                 {
                     printf("Year is leap year");
                     break;
                 }
                 case 0:
                 {
                     printf("Year is not leap year");
                     break;
                 }
             }
             break;
           }
       }
   }*/

/*7. Program to take the value from the user as input electricity unit charges and calculate total electricity bill according to the given condition .
    Using the switch statement.
    For the first 50 units Rs. 0.50/unit
    For the next 100 units Rs. 0.75/unit
    For the next 100 units Rs. 1.20/unit
    For units above 250 Rs. 1.50/unit
    An additional surcharge of 20% is added to the bill. */

    /*#include<stdio.h>
    int main()
    {
        int n;
        float c;
        printf("Enter electricity unit");
        scanf("%d",&n);
        switch(n)
        {
            case 1 ... 50:
            {
              c=n*.50;
              break;
            }
            case 51 ... 100:
            {
                c=25+(n-50)*.75;
                break;
            }

            case 101 ... 250:
            {
                c=25+37.5+(n-100)*1.20;
                break;
            }
            default:
            {
              c=25+37.5+180+(n-250)*1.50;
                break;
            }

        }
        c=c+20/100.0*c;
        printf("%f",c);
    }*/

/*8. Program to convert a positive number into a negative number and negative number into a positive number
using a switch statement. */


  #include<stdio.h>
  int main()
  {
      int n,c=0;
      printf("Enter a number");
      scanf("%d",&n);
      switch(n>=c)
      {
         case 1:
         {
             n=-n;
             printf("%d",n);
             break;
         }
         case 0:
         {
             n=-1*n;
             printf("%d",n);
         }
      }


  }


//9. Program to Convert even number into its upper nearest odd number Switch Statement.

 /* #include<stdio.h>
  int main()
  {
      int n;
      printf("Enter a even number");
      scanf("%d",&n);
      switch(n%2==0)
      {
          case 1:
          {
              printf("%d",n+1);
              break;
          }
          case 0:
          {
              printf("%d",n+2);
              break;
          }
      }
      return 0;
  }*/

//10. C program to find all roots of a quadratic equation using switch case

/*#include<stdio.h>
int main()
{
    int a,b,c,s;
    printf("Enter quadratic equation value");
    scanf("%d%d%d",&a,&b,&c);
    s=b*b-4*a*c;
    switch(s>0)
    {
        case 1:
        {
            printf("quadratic equation are real and distinct");
            break;
        }
        case 0:
        {
            switch(s<0)
            {
                case 1:
                {
                  printf("quadratic equation are imaginary");
                    break;
                }
                case 0:
                {
                    printf("quadratic equation are real and equal");
                    break;
                }
            }
            break;
        }
    }
}*/






