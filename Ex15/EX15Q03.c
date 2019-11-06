#include <stdio.h>
#include <stdlib.h>

main()
{
  int tamVetor, i;
  float *p=NULL;

  printf("Digite o tamanho do vetor: ");
  scanf("%d",&tamVetor);

  p=(float*)malloc(tamVetor*sizeof(float));

  if(p!=NULL)
     printf("alocou\n\n");
     printf("Digite os valores para preencher o vetor:\n");

  for (i=0;i<tamVetor;i++)
      {
       scanf("%f",&p[i]);
      }
  for (i=0;i<tamVetor;i++)
      {
       printf("%.1f\n",p[i]);
      }
}
