#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, n4, n5, n6;

    printf("N1    N2    N3    N4    N5    N6\n");

    for (n1 = 1; n1 <= 60; n1++){
        for (n2 = 2; n2 <= 60; n2++){
            for (n3 = 3; n3 <= 60; n3++){
                for (n4 = 4; n4 <= 60; n4++){
                    for (n5 = 5; n5 <= 60; n5++){
                        for (n6 = 6; n6 <= 60; n6++){
                                if (n1 != n2 && n2 != n3 && n3 != n4 && n4 != n5 && n5 != n6 && n1 < n2 && n2 < n3 && n3 < n4 && n4 < n5 && n5 < n6){
                                printf("%d     %d     %d     %d     %d     %d \n", n1, n2, n3, n4, n5, n6);
                                }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
