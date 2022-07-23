#include<stdio.h>

char win[10];
char loss[10];

void main()
{
char msg[5];
int i,size;

printf("enter msg IDs \n");
for(i=0;i<5;i++)
scanf("%x",&msg[i])

size=sizeof(msg)/sizeof(msg[0]);
 arbitration(msg,5);
 for(int p=0p<5;p++)
 {
     printf("%x\n ",result[p]);
 }

}

char* arbitration(char *ID,int no_msg)
{
    int n,count=0,small=0,k=0;;

  for(n=0;n<no_msg;n++)
  {
      count=0;
    for(int i=7;i>=0;i--)
    {
        if(ID[n]>>i&1)
        {
            ;
        }
        else
        {
            count++;
        }
    }

    if(count=<small)
    {
        small=count;
        result[k++]=count;
    }
    else

  }
  return result;
}


