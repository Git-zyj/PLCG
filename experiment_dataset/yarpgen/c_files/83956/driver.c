#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 63212876U;
unsigned short var_9 = (unsigned short)5674;
unsigned long long int var_10 = 14970675185305553078ULL;
int zero = 0;
short var_11 = (short)5344;
unsigned short var_12 = (unsigned short)24095;
unsigned int var_13 = 924663850U;
unsigned int var_14 = 2488037794U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
