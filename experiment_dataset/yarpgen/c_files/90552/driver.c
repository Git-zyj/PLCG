#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12577;
long long int var_5 = 3394578310136411319LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 8632242623740164956ULL;
signed char var_10 = (signed char)-1;
unsigned short var_12 = (unsigned short)31583;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 8143865450727332563LL;
short var_15 = (short)3730;
unsigned short var_16 = (unsigned short)56932;
unsigned char var_17 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
