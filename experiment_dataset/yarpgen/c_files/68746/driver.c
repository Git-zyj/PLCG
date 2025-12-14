#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1982792344U;
unsigned long long int var_2 = 13867194526749352997ULL;
unsigned short var_3 = (unsigned short)5355;
unsigned int var_6 = 3877292893U;
unsigned char var_7 = (unsigned char)19;
unsigned char var_8 = (unsigned char)80;
short var_9 = (short)-8053;
int zero = 0;
unsigned int var_11 = 2175443065U;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
