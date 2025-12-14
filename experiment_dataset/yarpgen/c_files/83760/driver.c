#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18659;
unsigned int var_3 = 3060562897U;
long long int var_5 = 1960091232452850537LL;
unsigned char var_9 = (unsigned char)62;
int zero = 0;
unsigned int var_15 = 2398047232U;
unsigned long long int var_16 = 16268020410302379656ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
