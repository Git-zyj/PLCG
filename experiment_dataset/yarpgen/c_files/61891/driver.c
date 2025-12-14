#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7848276016719725684ULL;
unsigned short var_5 = (unsigned short)3040;
unsigned long long int var_6 = 13144151308608784982ULL;
unsigned short var_10 = (unsigned short)29450;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 15983144299932648966ULL;
unsigned int var_13 = 3195136245U;
int var_14 = 822920802;
short var_15 = (short)8619;
short var_16 = (short)-9175;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
