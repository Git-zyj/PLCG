#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12875;
int var_4 = 2143511956;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)172;
short var_12 = (short)5140;
int zero = 0;
short var_14 = (short)-9209;
int var_15 = 220956593;
unsigned int var_16 = 4087503699U;
signed char var_17 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
