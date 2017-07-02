
#include "hello.h"

int main (void)
{
    char * string = "hellohello123";
    int i;
    for (i = 0; i < strlen(string); i++)
    {
        int result = HelloFSM(string[i]);
        if (4 == i || 9 == i)
        {
            assert(0 == result);  
        }
        else
        {
            assert(-1 == result);
        }
    }
    return 0;
}
