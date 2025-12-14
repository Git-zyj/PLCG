#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35424;
unsigned long long int var_1 = 1240577813703733831ULL;
unsigned short var_2 = (unsigned short)58153;
short var_3 = (short)11808;
_Bool var_4 = (_Bool)1;
long long int var_5 = -7931271008661081000LL;
int var_6 = 545045262;
int var_8 = -1306851254;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 4236000666U;
int zero = 0;
unsigned long long int var_16 = 2358933251366005583ULL;
unsigned int var_17 = 54000462U;
unsigned int var_18 = 2927693879U;
void init() {
}

void checksum() {
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
