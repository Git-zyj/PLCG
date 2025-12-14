#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3420817099016989791LL;
short var_5 = (short)-3283;
unsigned int var_6 = 1424177860U;
int var_10 = -30292128;
long long int var_12 = -2169295568489759668LL;
int zero = 0;
int var_20 = 2028618689;
unsigned char var_21 = (unsigned char)131;
unsigned char var_22 = (unsigned char)58;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
