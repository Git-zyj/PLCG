#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)99;
signed char var_2 = (signed char)-96;
unsigned short var_3 = (unsigned short)33619;
int var_6 = 1913289271;
unsigned short var_7 = (unsigned short)38046;
unsigned int var_8 = 2753673361U;
unsigned short var_10 = (unsigned short)23464;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 1310380280405364629ULL;
signed char var_17 = (signed char)-33;
int zero = 0;
unsigned char var_18 = (unsigned char)134;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)36546;
unsigned char var_21 = (unsigned char)97;
unsigned long long int var_22 = 9274048981093779225ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
