#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4246683183907062159ULL;
unsigned char var_3 = (unsigned char)71;
short var_5 = (short)-914;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 12796740219048038000ULL;
int var_8 = -809084935;
long long int var_9 = -8450246095992975253LL;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-16084;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)13919;
unsigned short var_16 = (unsigned short)15492;
unsigned short var_17 = (unsigned short)31237;
short var_18 = (short)24288;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
