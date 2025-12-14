#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
unsigned long long int var_6 = 1880448773221756514ULL;
unsigned int var_11 = 3398049236U;
_Bool var_13 = (_Bool)1;
unsigned short var_16 = (unsigned short)58903;
int zero = 0;
unsigned short var_17 = (unsigned short)16199;
signed char var_18 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
