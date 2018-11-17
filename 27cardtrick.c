#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
int i,a,b,d,x,y,v,xx,z;
char* h1[9]={"A1","B2","C3","D4","E5","F6","G7","H8","I9"};
char* h2[9]={"J10","K11","L12","M13","N14","015","P16","Q17","R18"};
char* h3[9]={"S19","T20","U21","V22","W23","X24","Y25","Z26","A27"};
char* h4[9];
char* h5[9];
char* h6[9];
char* h7[9];
char* h8[9];
char* h9[9];
char* h10[27];


printf("Choose a card\n\n");

//for printing the cards
{
for(i=0;i<9;i++)
{
    printf("%s\t%s\t%s\t",h1[i],h2[i],h3[i]);
}
printf("\n\n");
}
//getting the fav number of the user
{
printf("enter your favorite number : ");
scanf("%d",&a);
}

d=a-1; //duplicating the number for placing the cards
v=a-1; //duplicating the number for placing the cards
xx=a-1;
//to get the divisible numbers
{
    d=d/9;
    v=v%9;
    y=v/3;
    x=v%3;
}

//for printing numbers for the first time
{
printf("\n\n  set1\tset2\tset3\n\n");
for(i=0;i<=8;i++)
{
    printf("  %s\t%s\t%s\n",h1[i],h2[i],h3[i]);
}
}
//asking user to say the group it is in
printf("\nwhich set is your number in : ");
scanf("%d",&b);
if(b==1)
{
    if(x==0)
    {
        for(i=0;i<3;i++)
        {
            h4[i]=h1[3*i];
            h4[i+3]=h2[3*i];
            h4[i+6]=h3[3*i];
            h5[i]=h1[3*i+1];
            h5[i+3]=h2[3*i+1];
            h5[i+6]=h3[3*i+1];
            h6[i]=h1[3*i+2];
            h6[i+3]=h2[3*i+2];
            h6[i+6]=h3[3*i+2];
        }
    }
    else if(x==1)
    {
       for(i=0;i<3;i++)
        {
            h4[i]=h2[3*i];
            h4[i+3]=h1[3*i];
            h4[i+6]=h3[3*i];
            h5[i]=h2[3*i+1];
            h5[i+3]=h1[3*i+1];
            h5[i+6]=h3[3*i+1];
            h6[i]=h2[3*i+2];
            h6[i+3]=h1[3*i+2];
            h6[i+6]=h3[3*i+2];

     }}
     else if(x==2)
    {
        for(i=0;i<3;i++)
        {
            h4[i]=h3[3*i];
            h4[i+3]=h2[3*i];
            h4[i+6]=h1[3*i];
            h5[i]=h3[3*i+1];
            h5[i+3]=h2[3*i+1];
            h5[i+6]=h1[3*i+1];
            h6[i]=h3[3*i+2];
            h6[i+3]=h2[3*i+2];
            h6[i+6]=h1[3*i+2];
        }
    }
}

else if(b==2)
{
    if(x==0)
    {
        for(i=0;i<3;i++)
        {
            h4[i]=h2[3*i];
            h4[i+3]=h1[3*i];
            h4[i+6]=h3[3*i];
            h5[i]=h2[3*i+1];
            h5[i+3]=h1[3*i+1];
            h5[i+6]=h3[3*i+1];
            h6[i]=h2[3*i+2];
            h6[i+3]=h1[3*i+2];
            h6[i+6]=h3[3*i+2];
        }
    }
    else if(x==1)
    {
       for(i=0;i<3;i++)
        {
            h4[i]=h1[3*i];
            h4[i+3]=h2[3*i];
            h4[i+6]=h3[3*i];
            h5[i]=h1[3*i+1];
            h5[i+3]=h2[3*i+1];
            h5[i+6]=h3[3*i+1];
            h6[i]=h1[3*i+2];
            h6[i+3]=h2[3*i+2];
            h6[i+6]=h3[3*i+2];
        }
     }
     else if(x==2)
    {
        for(i=0;i<3;i++)
        {
            h4[i]=h3[3*i];
            h4[i+3]=h1[3*i];
            h4[i+6]=h2[3*i];
            h5[i]=h3[3*i+1];
            h5[i+3]=h1[3*i+1];
            h5[i+6]=h2[3*i+1];
            h6[i]=h3[3*i+2];
            h6[i+3]=h1[3*i+2];
            h6[i+6]=h2[3*i+2];
        }
    }
}

else if(b==3)
{
    if(x==0)
    {
        for(i=0;i<3;i++)
        {
            h4[i]=h3[3*i];
            h4[i+3]=h1[3*i];
            h4[i+6]=h2[3*i];
            h5[i]=h3[3*i+1];
            h5[i+3]=h1[3*i+1];
            h5[i+6]=h2[3*i+1];
            h6[i]=h3[3*i+2];
            h6[i+3]=h1[3*i+2];
            h6[i+6]=h2[3*i+2];
        }
    }
    else if(x==1)
    {
       for(i=0;i<3;i++)
        {
            h4[i]=h1[3*i];
            h4[i+3]=h3[3*i];
            h4[i+6]=h2[3*i];
            h5[i]=h1[3*i+1];
            h5[i+3]=h3[3*i+1];
            h5[i+6]=h2[3*i+1];
            h6[i]=h1[3*i+2];
            h6[i+3]=h3[3*i+2];
            h6[i+6]=h2[3*i+2];
        }
     }
     else if(x==2)
    {
        for(i=0;i<3;i++)
        {
            h4[i]=h2[3*i];
            h4[i+3]=h1[3*i];
            h4[i+6]=h3[3*i];
            h5[i]=h2[3*i+1];
            h5[i+3]=h1[3*i+1];
            h5[i+6]=h3[3*i+1];
            h6[i]=h2[3*i+2];
            h6[i+3]=h1[3*i+2];
            h6[i+6]=h3[3*i+2];
        }
    }
}
printf("\n\n  set1\tset2\tset3\n\n");
for(i=0;i<9;i++)
{
    printf(" %s\t%s\t%s\t\n",h4[i],h5[i],h6[i]);
}
printf("\nwhich set is your number in : ");
scanf("%d",&b);



if(b==1)
{
    if(y==0)
    {
        for(i=0;i<3;i++)
        {
            h7[i]=h4[3*i];
            h7[i+3]=h5[3*i];
            h7[i+6]=h6[3*i];
            h8[i]=h4[3*i+1];
            h8[i+3]=h5[3*i+1];
            h8[i+6]=h6[3*i+1];
            h9[i]=h4[3*i+2];
            h9[i+3]=h5[3*i+2];
            h9[i+6]=h6[3*i+2];
        }
    }
    else if(y==1)
    {
       for(i=0;i<3;i++)
        {
            h7[i]=h5[3*i];
            h7[i+3]=h4[3*i];
            h7[i+6]=h6[3*i];
            h8[i]=h5[3*i+1];
            h8[i+3]=h4[3*i+1];
            h8[i+6]=h6[3*i+1];
            h9[i]=h5[3*i+2];
            h9[i+3]=h4[3*i+2];
            h9[i+6]=h6[3*i+2];
        }
     }
     else if(y==2)
    {
        for(i=0;i<3;i++)
        {
            h7[i]=h5[3*i];
            h7[i+3]=h6[3*i];
            h7[i+6]=h4[3*i];
            h8[i]=h5[3*i+1];
            h8[i+3]=h6[3*i+1];
            h8[i+6]=h4[3*i+1];
            h9[i]=h5[3*i+2];
            h9[i+3]=h6[3*i+2];
            h9[i+6]=h4[3*i+2];
        }
    }
}
else if(b==2)
{
    if(y==0)
    {
        for(i=0;i<3;i++)
        {
            h7[i]=h5[3*i];
            h7[i+3]=h6[3*i];
            h7[i+6]=h4[3*i];
            h8[i]=h5[3*i+1];
            h8[i+3]=h6[3*i+1];
            h8[i+6]=h4[3*i+1];
            h9[i]=h5[3*i+2];
            h9[i+3]=h6[3*i+2];
            h9[i+6]=h4[3*i+2];
        }
    }
    else if(y==1)
    {
       for(i=0;i<3;i++)
        {
           h7[i]=h4[3*i];
            h7[i+3]=h5[3*i];
            h7[i+6]=h6[3*i];
            h8[i]=h4[3*i+1];
            h8[i+3]=h5[3*i+1];
            h8[i+6]=h6[3*i+1];
            h9[i]=h4[3*i+2];
            h9[i+3]=h5[3*i+2];
            h9[i+6]=h6[3*i+2];
        }
     }
     else if(y==2)
    {
        for(i=0;i<3;i++)
        {
             h7[i]=h4[3*i];
            h7[i+3]=h6[3*i];
            h7[i+6]=h5[3*i];
            h8[i]=h4[3*i+1];
            h8[i+3]=h6[3*i+1];
            h8[i+6]=h5[3*i+1];
            h9[i]=h4[3*i+2];
            h9[i+3]=h6[3*i+2];
            h9[i+6]=h5[3*i+2];
        }
    }
}
else if(b==3)
{
    if(y==0)
    {
        for(i=0;i<3;i++)
        {
           h7[i]=h6[3*i];
            h7[i+3]=h4[3*i];
            h7[i+6]=h5[3*i];
            h8[i]=h6[3*i+1];
            h8[i+3]=h4[3*i+1];
            h8[i+6]=h5[3*i+1];
            h9[i]=h6[3*i+2];
            h9[i+3]=h4[3*i+2];
            h9[i+6]=h5[3*i+2];
        }
    }
    else if(y==1)
    {
       for(i=0;i<3;i++)
        {
            h7[i]=h4[3*i];
            h7[i+3]=h6[3*i];
            h7[i+6]=h5[3*i];
            h8[i]=h4[3*i+1];
            h8[i+3]=h6[3*i+1];
            h8[i+6]=h5[3*i+1];
            h9[i]=h4[3*i+2];
            h9[i+3]=h6[3*i+2];
            h9[i+6]=h5[3*i+2];
        }
     }
     else if(y==2)
    {
        for(i=0;i<3;i++)
        {
           h7[i]=h4[3*i];
            h7[i+3]=h5[3*i];
            h7[i+6]=h6[3*i];
            h8[i]=h4[3*i+1];
            h8[i+3]=h5[3*i+1];
            h8[i+6]=h6[3*i+1];
            h9[i]=h4[3*i+2];
            h9[i+3]=h5[3*i+2];
            h9[i+6]=h6[3*i+2];
        }
    }
}
printf("\n\n  set1\tset2\tset3\n\n");
for(i=0;i<9;i++)
{
    printf(" %s\t%s\t%s\t\n",h7[i],h8[i],h9[i]);
}
printf("\nwhich set is your number in : ");
scanf("%d",&b);
if(b==1)
{
    if(d==0)
        for(i=0;i<9;i++)
    {
        h10[i]=h7[i];
        h10[i+9]=h8[i];
        h10[i+18]=h9[i];
    }
     if(d==1)
        for(i=0;i<9;i++)
    {
        h10[i]=h8[i];
        h10[i+9]=h7[i];
        h10[i+18]=h9[i];
    }
    if(d==2)
        for(i=0;i<9;i++)
    {
        h10[i]=h8[i];
        h10[i+9]=h9[i];
        h10[i+18]=h7[i];
    }

}
if(b==2)
{
    if(d==0)
        for(i=0;i<9;i++)
    {
        h10[i]=h8[i];
        h10[i+9]=h7[i];
        h10[i+18]=h9[i];
    }
     if(d==1)
        for(i=0;i<9;i++)
    {
        h10[i]=h7[i];
        h10[i+9]=h8[i];
        h10[i+18]=h9[i];
    }
    if(d==2)
        for(i=0;i<9;i++)
    {
        h10[i]=h7[i];
        h10[i+9]=h9[i];
        h10[i+18]=h8[i];
    }

}
if(b==3)
{
    if(d==0)
        for(i=0;i<9;i++)
    {
        h10[i]=h9[i];
        h10[i+9]=h7[i];
        h10[i+18]=h8[i];
    }
     if(d==1)
        for(i=0;i<9;i++)
    {
        h10[i]=h7[i];
        h10[i+9]=h9[i];
        h10[i+18]=h8[i];
    }
    if(d==2)
        for(i=0;i<9;i++)
    {
        h10[i]=h7[i];
        h10[i+9]=h8[i];
        h10[i+18]=h9[i];
    }

}
printf("\nSee your lucky number\n\n");
for(i=0;i<9;i++)
{
    printf("%d. %s\t\t%d. %s\t\t%d. %s\n",i+1,h10[i],i+10,h10[i+9],i+19,h10[i+18]);
}
printf("\n1. Play again\n2.Exit\nEnter your option");
do
{
scanf("%d",&z);
switch(z)
{
    case 1: main();
    case 2: exit(1);
    default: printf("Enter a valid option");
}
}
while(1);
}
