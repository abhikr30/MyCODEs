//WAP to find the difference between two dates in years, months, and days.
//Assume that the dates entered are in a valid range and that the first date falls before second date.
#include<stdio.h>
int main(void)
{
    int d,d1,d2,m,m1,m2,y,y1,y2;
    do
    {
        printf("Enter 1st date YYYY-MM-DD (example: 1920-12-04): ");
        scanf("%d-%d-%d",&y1,&m1,&d1);
        printf("Enter 2nd date YYYY-MM-DD (example: 1921-12-04): ");
        scanf("%d-%d-%d",&y2,&m2,&d2);
        if((y2<y1) || (m1<1 || m1>12 || d1<1 || d1>31 || m2<1 || m2>12 || d2<1 || d2>31) || ((m1==4 || m1==6 || m1==9 || m1==11) && d1>30) || ((m2==4 || m2==6 || m2==9 || m2==11) && d2>30) || ((m1==2 && (y1%100!=0 && y1%4==0 || y1%400==0) && d1>29)) || ((m2==2 && (y2%100!=0 && y2%4==0 || y2%400==0) && d2>29)) || ((m1==2 && !(y1%100!=0 && y1%4==0 || y1%400==0) && d1>28)) || ((m2==2 && !(y2%100!=0 && y2%4==0 || y2%400==0) && d2>28))) //if invalid date enter again.
        {
            printf("\nENTER A VALID DATE !!!\nNOTE:- 1st date should fall before the second date.\n\n");
        }
    }while((y2<y1) || (m1<1 || m1>12 || d1<1 || d1>31 || m2<1 || m2>12 || d2<1 || d2>31) || ((m1==4 || m1==6 || m1==9 || m1==11) && d1>30) || ((m2==4 || m2==6 || m2==9 || m2==11) && d2>30) || ((m1==2 && (y1%100!=0 && y1%4==0 || y1%400==0) && d1>29)) || ((m2==2 && (y2%100!=0 && y2%4==0 || y2%400==0) && d2>29)) || ((m1==2 && !(y1%100!=0 && y1%4==0 || y1%400==0) && d1>28)) || ((m2==2 && !(y2%100!=0 && y2%4==0 || y2%400==0) && d2>28)));//check for invalid date.
    if(d2<d1)
    {
        if(m2==3)//check for february month because m2=m2-1.
        {
            if(y2%100!=0 && y2%4==0 || y2%400==0)//check for leap year.
                d2=d2+29;
            else
                d2=d2+28;
        }
        else if(m2==4 || m2==6 || m2==8 || m2==9 || m2==11)//check for number for days in a month.
            d2=d2+30;
        else    
            d2=d2+31;
        m2=m2-1;
    }

    if(m2<m1)
    {
        m2=m2+12;
        y2=y2-1;
    }
    
    y=y2-y1;
    m=m2-m1;
    d=d2-d1;
    printf("Difference Between of the two dates is: %d years %02d months %02d days",y,m,d-1);
    return 0;
}