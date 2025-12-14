#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2308565635U;
_Bool var_5 = (_Bool)0;
unsigned long long int var_10 = 6115134879683490598ULL;
signed char var_11 = (signed char)-45;
long long int var_14 = 4226892759259527236LL;
_Bool var_15 = (_Bool)1;
long long int var_19 = -9212896455382182070LL;
int zero = 0;
unsigned int var_20 = 516284643U;
unsigned int var_21 = 3205339467U;
signed char var_22 = (signed char)14;
unsigned short var_23 = (unsigned short)33720;
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
