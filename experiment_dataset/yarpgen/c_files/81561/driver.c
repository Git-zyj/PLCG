#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)43;
_Bool var_1 = (_Bool)1;
unsigned char var_5 = (unsigned char)158;
unsigned int var_7 = 1694323194U;
unsigned int var_8 = 2907289521U;
int var_11 = 1216968391;
int var_12 = -1028304929;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
long long int var_15 = 6118343965421369159LL;
short var_16 = (short)-13024;
void init() {
}

void checksum() {
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
