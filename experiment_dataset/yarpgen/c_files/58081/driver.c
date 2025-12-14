#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)216;
short var_4 = (short)-32261;
long long int var_7 = -2863209983267405636LL;
signed char var_8 = (signed char)-96;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-104;
unsigned long long int var_13 = 9919641559076317798ULL;
int zero = 0;
unsigned long long int var_15 = 336307281387768049ULL;
signed char var_16 = (signed char)16;
signed char var_17 = (signed char)2;
_Bool var_18 = (_Bool)1;
long long int var_19 = 1378116487678828400LL;
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
