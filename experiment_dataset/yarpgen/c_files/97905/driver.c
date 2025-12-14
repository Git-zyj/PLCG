#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)33;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 12380839636601917391ULL;
short var_11 = (short)15213;
unsigned char var_12 = (unsigned char)68;
unsigned char var_13 = (unsigned char)152;
short var_14 = (short)-24965;
unsigned char var_15 = (unsigned char)11;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)35364;
short var_19 = (short)-29014;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)99;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
