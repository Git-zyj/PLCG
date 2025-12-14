#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13333;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)157;
unsigned char var_11 = (unsigned char)152;
signed char var_15 = (signed char)4;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)45867;
_Bool var_21 = (_Bool)0;
short var_22 = (short)2658;
void init() {
}

void checksum() {
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
