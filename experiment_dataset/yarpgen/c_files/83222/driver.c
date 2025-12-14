#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1855288683U;
unsigned char var_3 = (unsigned char)55;
int var_4 = 1809481721;
unsigned long long int var_6 = 10992908186427641748ULL;
unsigned short var_8 = (unsigned short)53202;
unsigned long long int var_11 = 2008640113616361020ULL;
long long int var_12 = -1727231626880759473LL;
int zero = 0;
unsigned long long int var_14 = 12973772745476723530ULL;
short var_15 = (short)7145;
void init() {
}

void checksum() {
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
