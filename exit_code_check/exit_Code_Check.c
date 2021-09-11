#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("\n\n**** My exit code check functionality implementation ****\n\n");
    printf("Now this one got exited with error code (2) and you can check this\
 error code in the windows terminal when you give the below command \n");
    printf("\n\techo %%errorlevel%% \n");
    exit(2);

    return 0;
}
