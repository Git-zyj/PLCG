#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 2892508040U;
int var_16 = 2052833582;
int zero = 0;
unsigned int var_20 = 3814446824U;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)187;
short var_23 = (short)1515;
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
