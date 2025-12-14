#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32210;
unsigned char var_5 = (unsigned char)165;
long long int var_6 = -2690849891254627217LL;
signed char var_10 = (signed char)66;
_Bool var_11 = (_Bool)0;
short var_13 = (short)12630;
unsigned short var_14 = (unsigned short)6221;
long long int var_15 = -1061359729421350572LL;
int zero = 0;
unsigned int var_19 = 1616499242U;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)56675;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
