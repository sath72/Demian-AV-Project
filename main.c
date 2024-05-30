#include "myTypes.h"
#define INIT_VAL    (42)

uint32_t GetSomeValue(void)
{
    static uint32_t someValue = INIT_VAL;
    return someValue++;
}

int main(void)
{
    volatile uint32_t a;
    while (1) {
        a = GetSomeValue();
    }
    return(a);
}

