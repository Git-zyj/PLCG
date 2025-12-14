#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 510214067248491690LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 9597293097922412418ULL;
unsigned char var_7 = (unsigned char)233;
unsigned int var_8 = 2102433510U;
unsigned char var_10 = (unsigned char)43;
unsigned int var_11 = 396745323U;
int zero = 0;
signed char var_14 = (signed char)-70;
signed char var_15 = (signed char)-21;
unsigned short var_16 = (unsigned short)52905;
signed char var_17 = (signed char)38;
unsigned long long int var_18 = 735241670303459741ULL;
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
