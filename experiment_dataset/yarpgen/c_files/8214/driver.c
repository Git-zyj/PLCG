#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12789;
signed char var_1 = (signed char)60;
unsigned long long int var_3 = 8838420661002516679ULL;
unsigned char var_10 = (unsigned char)176;
long long int var_14 = -6718134071615208369LL;
int zero = 0;
unsigned int var_15 = 2082498702U;
int var_16 = 528025871;
unsigned short var_17 = (unsigned short)33792;
unsigned int var_18 = 2783788566U;
void init() {
}

void checksum() {
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
