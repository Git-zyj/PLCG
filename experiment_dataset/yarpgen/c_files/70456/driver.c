#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1290209738;
unsigned short var_2 = (unsigned short)4230;
unsigned int var_5 = 3844270888U;
unsigned int var_6 = 708036829U;
_Bool var_7 = (_Bool)1;
long long int var_8 = 985745795579048792LL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)59375;
unsigned long long int var_11 = 11604926536477554467ULL;
unsigned short var_12 = (unsigned short)42487;
short var_13 = (short)14493;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-69;
unsigned char var_16 = (unsigned char)188;
unsigned short var_17 = (unsigned short)32855;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
