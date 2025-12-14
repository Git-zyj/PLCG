#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)234;
signed char var_1 = (signed char)-48;
_Bool var_2 = (_Bool)1;
long long int var_3 = 8073663380212460505LL;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-44;
short var_8 = (short)17278;
short var_10 = (short)22987;
unsigned short var_11 = (unsigned short)3888;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = 29358192;
unsigned char var_14 = (unsigned char)147;
signed char var_15 = (signed char)92;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
