#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 480001756U;
long long int var_5 = -7974166445064392864LL;
unsigned short var_7 = (unsigned short)23421;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-55;
unsigned int var_13 = 2305970642U;
signed char var_15 = (signed char)16;
int zero = 0;
signed char var_16 = (signed char)53;
unsigned short var_17 = (unsigned short)63632;
void init() {
}

void checksum() {
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
