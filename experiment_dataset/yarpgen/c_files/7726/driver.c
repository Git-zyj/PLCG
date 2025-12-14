#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)250;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
short var_5 = (short)4635;
short var_6 = (short)-29925;
int var_7 = -807366827;
unsigned short var_8 = (unsigned short)51456;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-18074;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)194;
int zero = 0;
unsigned int var_15 = 3316931703U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
