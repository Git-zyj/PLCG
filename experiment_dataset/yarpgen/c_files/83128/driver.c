#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)151;
unsigned char var_8 = (unsigned char)64;
unsigned char var_10 = (unsigned char)120;
short var_11 = (short)16441;
unsigned char var_12 = (unsigned char)55;
int zero = 0;
short var_14 = (short)-21115;
int var_15 = 1423743135;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)120;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
