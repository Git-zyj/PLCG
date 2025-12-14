#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)158;
short var_2 = (short)19910;
signed char var_3 = (signed char)113;
signed char var_4 = (signed char)-8;
unsigned long long int var_11 = 10333794490687364215ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)24486;
unsigned long long int var_14 = 6443623254010110807ULL;
unsigned int var_15 = 203555205U;
long long int var_16 = 5701530349087107999LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
