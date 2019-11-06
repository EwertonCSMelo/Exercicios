#include <stdio.h>

main()
{
    int tamVetor, *p=NULL;

    printf("Tamanho do vetor: ");
    scanf("%d",&tamVetor);

    p=(int*)malloc(tamVetor*sizeof(int));

    if(p!=NULL) printf("Memoria alocada...");
}



