#include <stdio.h>


/** int: 2 bytes
 *  de acordo com a documentação, sizeof espera o tipo long unsigned, por isso existe a necessidade de colocar %lu
 * 
 * 
 */

int main(){
    int n;
    printf("Selecione o tamanho do Array: ");
    scanf("%d", &n);

    int A[n] = {1,23,4};

    printf("%lu\n", sizeof(A));

    for (int i = 0; i < n; i++)
    {
        printf ("%d\n", A[i]);
    }
     


    return 0;
}   