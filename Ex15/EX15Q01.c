#include <stdio.h>
#include <stdlib.h>
main()
{
    int *p=NULL,n,i;
    p=(int*)malloc(5*sizeof(int));
    if(p!=NULL)
       printf("Alocou\n");
    printf("%p\n");

    printf("Digite cinco numeros:\n");

    for(i=0;i<5;i++)
       {
        printf("Digite o numero %d: ",i+1);
        scanf("%d",&p[i]);
       }

    for(i=0;i<5;i++)
       {
        printf("%d ",p[i]);
       }
    free(p);
}
