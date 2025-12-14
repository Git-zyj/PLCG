#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-7;
long long int var_5 = 2762525499470506039LL;
long long int var_10 = 8685088344214424345LL;
long long int var_12 = -8739229038953128587LL;
unsigned char var_13 = (unsigned char)194;
int zero = 0;
long long int var_15 = 4738381926607972899LL;
signed char var_16 = (signed char)-97;
unsigned long long int var_17 = 15251183977878587793ULL;
unsigned long long int var_18 = 16061396575250489092ULL;
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
