#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)98;
_Bool var_2 = (_Bool)0;
int var_3 = 1429659323;
unsigned char var_4 = (unsigned char)171;
unsigned short var_5 = (unsigned short)17060;
unsigned short var_8 = (unsigned short)25638;
int var_10 = -1804070540;
int zero = 0;
unsigned char var_11 = (unsigned char)213;
unsigned char var_12 = (unsigned char)143;
_Bool var_13 = (_Bool)0;
long long int var_14 = 2492705315876900523LL;
signed char var_15 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
