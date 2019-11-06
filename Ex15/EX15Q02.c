#include <stdio.h>
#include <stdlib.h>

main()
{
    int tamVetor, *p=NULL,i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tamVetor);

    p=(int*)malloc(tamVetor*sizeof(int));


   if(p!=NULL)
      printf("Alocou\n");
   printf("%p\n",p);


    printf("Digite os valores para preencher o vetor com o tamanho escolhido...\n");

    for(i=0;i<tamVetor;i++)
       {
        scanf("%d",&p[i]);
       }
    for(i=0;i<tamVetor;i++)
       {
        printf("O valor da posicao v[%d] e' %d \n",i+1,p[i]);
       }
}
