#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)128;
short var_2 = (short)24873;
signed char var_3 = (signed char)29;
long long int var_7 = -6504017440318921611LL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-27445;
unsigned int var_19 = 1241070303U;
int zero = 0;
signed char var_20 = (signed char)100;
signed char var_21 = (signed char)-81;
short var_22 = (short)-2735;
long long int var_23 = -3724981479394594221LL;
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
