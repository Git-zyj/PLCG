#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 783026927U;
int var_1 = 541369999;
unsigned int var_2 = 1890572861U;
unsigned long long int var_3 = 3975094565371299131ULL;
signed char var_6 = (signed char)-67;
signed char var_7 = (signed char)-57;
unsigned long long int var_8 = 10652652119227673360ULL;
unsigned char var_9 = (unsigned char)232;
unsigned int var_11 = 4021422083U;
unsigned int var_12 = 1070451802U;
int zero = 0;
unsigned char var_14 = (unsigned char)158;
unsigned short var_15 = (unsigned short)58654;
unsigned char var_16 = (unsigned char)123;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 14203092960738656493ULL;
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
