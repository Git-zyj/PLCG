#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -97184980;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 3662024925U;
signed char var_8 = (signed char)31;
unsigned char var_9 = (unsigned char)218;
long long int var_10 = -4645990003335511793LL;
unsigned char var_13 = (unsigned char)92;
unsigned char var_14 = (unsigned char)72;
unsigned short var_15 = (unsigned short)23873;
int zero = 0;
long long int var_20 = 3423381242605320765LL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)29;
short var_23 = (short)-3036;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
