#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53303;
signed char var_5 = (signed char)-33;
signed char var_7 = (signed char)-67;
signed char var_8 = (signed char)-2;
unsigned char var_12 = (unsigned char)115;
unsigned long long int var_13 = 8967566467057993468ULL;
long long int var_14 = -3308373547762405942LL;
unsigned int var_15 = 641521825U;
int var_16 = -269399154;
int zero = 0;
unsigned int var_19 = 462105796U;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 517621527U;
int var_22 = -730854343;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
