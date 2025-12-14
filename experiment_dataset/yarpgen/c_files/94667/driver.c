#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)59463;
unsigned char var_5 = (unsigned char)156;
long long int var_7 = 6078371244603109994LL;
unsigned short var_13 = (unsigned short)9088;
long long int var_14 = -8488079421848897778LL;
int zero = 0;
unsigned int var_15 = 2982905892U;
unsigned short var_16 = (unsigned short)15710;
short var_17 = (short)19679;
unsigned int var_18 = 31323952U;
short var_19 = (short)-11645;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
