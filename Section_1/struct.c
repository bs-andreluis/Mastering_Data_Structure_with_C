#include <stdio.h>


/** int: 2 bytes
 *  de acordo com a documentação, sizeof espera o tipo long unsigned, por isso existe a necessidade de colocar %lu
 * 
 * 
 */

struct Retangle
{
    int length;
    int witdh;
};


int main(){
    struct Retangle r1 = {2,5};

    printf("%lu\n", sizeof(r1));

    printf("%d %d\n",r1.length, r1.witdh);
    r1.length = 10;
    printf("%d %d\n",r1.length, r1.witdh);
    

    
    return 0;
}   