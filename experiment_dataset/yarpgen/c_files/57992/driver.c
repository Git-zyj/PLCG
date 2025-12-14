#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)18623;
signed char var_7 = (signed char)123;
unsigned char var_9 = (unsigned char)100;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-31929;
signed char var_13 = (signed char)85;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1428353013U;
unsigned int var_16 = 2897415877U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
