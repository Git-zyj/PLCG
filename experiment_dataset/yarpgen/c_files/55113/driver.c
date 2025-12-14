#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1664576083;
unsigned long long int var_1 = 2872883057013836119ULL;
int var_2 = 1702813769;
long long int var_4 = -3873724332107311944LL;
signed char var_5 = (signed char)26;
signed char var_6 = (signed char)-78;
long long int var_7 = -672663441398320020LL;
unsigned int var_8 = 436297318U;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)128;
unsigned short var_13 = (unsigned short)59288;
int zero = 0;
unsigned short var_15 = (unsigned short)3324;
unsigned int var_16 = 4033365336U;
unsigned long long int var_17 = 17962037795891138019ULL;
unsigned int var_18 = 235055308U;
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
