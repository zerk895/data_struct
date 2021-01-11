
#include <stdio.h>

int main()
{
  	int n,count,i=0;
	int a[8];
    while(scanf("%d",&n) != EOF){
        
         count=7,i=0;
         while(count){
                a[count]=0; //initial
                count--;
            }
        
        if(n>0) {               //positive_number
            while(n>0){
                a[i] = n%2;
                i++ ;
                n = n/2;
                
            }
            count=7;
            for(;count>=0;count--)
                printf("%d",a[count]);
                printf("\n");
        
            
        }                       
                                   /*if it's a negative_number,take its absolute value,turn into binary,
                                    inverse its all  binary number then +1*/
        else{                   //negative_number
            n*=-1;
            while(n>0){
                a[i] = n%2;
                i++ ;
                n = n/2;
                
            }
            
            for(int j=0;j<=7;j++)  //inverse it
            {
                if(a[j]==0){
                    a[j]=1;
                    
                }else
                {
                    a[j]=0;
                }
            }
            
            if(a[0]==0)  //even situation
            {
                a[0]=1;
            }else{  // odd situation 
                for(int k=1;k<=7;k++)
                {
                    if(a[k]==0)
                    {
                        a[k]=1;
                        for(int l=0;l<=k-1;l++)
                        {
                            a[l]=0;
                        }
                    }
                }
            }
            
            count=7;
            for(;count>=0;count--)
                printf("%d",a[count]);
                printf("\n");
        
            
        }
        
        
    }
    return 0;
}
