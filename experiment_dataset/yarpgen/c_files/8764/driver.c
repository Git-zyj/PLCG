#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)46;
unsigned int var_5 = 1641699602U;
long long int var_8 = 1819556425348327220LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_15 = 1390224649;
int var_16 = -2097137000;
unsigned short var_17 = (unsigned short)34087;
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
