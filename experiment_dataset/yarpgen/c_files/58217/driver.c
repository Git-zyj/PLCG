#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)28095;
unsigned short var_9 = (unsigned short)27832;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1918037938U;
unsigned char var_22 = (unsigned char)49;
unsigned int var_23 = 3811772429U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
