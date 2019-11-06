#include <stdio.h>

main()
{
    int tamString,i;
    char *p=NULL;

    printf("Digite o tamanho do string: ");
    scanf("%d",&tamString);

    p=(char*)malloc(tamString*sizeof(char));

    if(p!=NULL)
       printf("Memoria alocada!\n");

    printf("Digite a palavra desejada: ");

    setbuf(stdin, NULL); // Limpar a stream antes de pegar os dados.
    fgets(p,tamString,stdin);

    for(i=0;i<tamString;i++)
        { if(p[i]!='a'&&p[i]!='e'&&p[i]!='i'&&p[i]!='o'&&p[i]!='u')
             printf("%c",p[i]);
        }

}
