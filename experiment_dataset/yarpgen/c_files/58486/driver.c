#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)39;
unsigned int var_2 = 1867589708U;
unsigned char var_3 = (unsigned char)234;
unsigned int var_4 = 4104150U;
short var_6 = (short)-21043;
unsigned char var_9 = (unsigned char)238;
long long int var_10 = -7506052325686848916LL;
long long int var_12 = 8709767972432162579LL;
long long int var_13 = 4957550305914711666LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 2230097255259777358ULL;
unsigned short var_16 = (unsigned short)42898;
short var_17 = (short)30418;
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
