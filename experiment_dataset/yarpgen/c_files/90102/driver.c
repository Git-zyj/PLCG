#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)224;
unsigned char var_5 = (unsigned char)24;
unsigned long long int var_7 = 1412649177504863087ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 4020793477U;
int zero = 0;
unsigned char var_11 = (unsigned char)173;
signed char var_12 = (signed char)24;
short var_13 = (short)3085;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
