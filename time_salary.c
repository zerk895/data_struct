#include <stdio.h>
#include<math.h>
#include<stdlib.h>


int main()
{
    int hour,pay;
    double salary = 0;
     while(scanf("%d %d", &hour,&pay) != EOF){
    if(hour<=60)
        salary=hour*pay;
    else if(hour>60 && hour<121)
        salary=(60*pay)+(hour-60)*pay*1.33;
    else if(hour>=121)
        salary=(60*pay*2.33)+(hour-120)*pay*1.66;
     printf("%.1lf\n",salary);
    }
    return 0;
        
}