#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35663;
unsigned int var_2 = 1424832111U;
long long int var_4 = -2352765848400274358LL;
short var_5 = (short)-21007;
unsigned short var_6 = (unsigned short)31537;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
long long int var_11 = -6605793681535210075LL;
unsigned short var_12 = (unsigned short)47027;
int zero = 0;
short var_14 = (short)8547;
long long int var_15 = -2932840264177642828LL;
unsigned int var_16 = 2704912940U;
void init() {
}

void checksum() {
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
