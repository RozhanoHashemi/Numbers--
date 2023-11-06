#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, npos=0, nneg=0;
int x, neg[10], pos[10];

 for(i=0; i<10; i++)
 { scanf("%d",&x);
 if(x>0)
 { pos[npos]=x;
 npos++;
 }
  if(x<0)
 { neg[nneg]=x;
 nneg++;
 }
 }
 for(i=0; i<nneg; i++)
 {printf("%d ", neg[i]);}
printf("\n");
 for(i=0; i<npos; i++){
 printf("%d ", pos[i]);}
printf("\n%d",nneg);
printf("\n%d",npos);


    return 0;
}
