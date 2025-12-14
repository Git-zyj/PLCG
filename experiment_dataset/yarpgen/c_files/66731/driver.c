#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3014089704606669642ULL;
unsigned short var_1 = (unsigned short)64672;
_Bool var_2 = (_Bool)1;
unsigned short var_6 = (unsigned short)40864;
unsigned short var_7 = (unsigned short)40814;
unsigned int var_8 = 1155196469U;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)68;
unsigned int var_14 = 904317440U;
unsigned char var_15 = (unsigned char)141;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)81;
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
