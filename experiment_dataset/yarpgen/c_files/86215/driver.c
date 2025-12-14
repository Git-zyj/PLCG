#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)15;
int var_6 = -419420544;
short var_7 = (short)-13877;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)63606;
unsigned int var_11 = 2446605205U;
int zero = 0;
short var_14 = (short)21477;
signed char var_15 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
