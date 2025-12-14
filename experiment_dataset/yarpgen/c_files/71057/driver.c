#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62215;
unsigned char var_4 = (unsigned char)125;
_Bool var_6 = (_Bool)0;
int var_8 = 1522790452;
int var_10 = 1175547562;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 1659271495U;
int zero = 0;
unsigned short var_17 = (unsigned short)35634;
unsigned long long int var_18 = 681153756842879326ULL;
unsigned short var_19 = (unsigned short)33252;
void init() {
}

void checksum() {
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
