#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2571160545U;
unsigned short var_2 = (unsigned short)19807;
unsigned long long int var_5 = 11057113417842041474ULL;
unsigned long long int var_7 = 10554948508358494454ULL;
unsigned long long int var_8 = 372738387117952633ULL;
unsigned long long int var_9 = 7930548916050395650ULL;
short var_10 = (short)22900;
unsigned int var_11 = 1570924928U;
unsigned int var_12 = 2053381177U;
unsigned int var_13 = 3101615287U;
_Bool var_15 = (_Bool)1;
unsigned short var_17 = (unsigned short)29221;
long long int var_18 = -4759229034167435093LL;
int zero = 0;
unsigned int var_19 = 445499829U;
signed char var_20 = (signed char)107;
long long int var_21 = -3025440372567158431LL;
unsigned char var_22 = (unsigned char)120;
int var_23 = 1758537491;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
