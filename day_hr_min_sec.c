#include <stdio.h>
#include<math.h>
#include<stdlib.h>


int main()
{
    int s,days,hrs,mins,secs;
     scanf("%d", &s);
     days = s/86400;
     hrs = (s%86400)/3600;
     mins = (s%3600)/60;
     secs = s%60;
     printf("%d days\n",days);
     printf("%d hours\n",hrs);
     printf("%d minutes\n",mins);
     printf("%d seconds\n",secs);
    return 0;
        
}