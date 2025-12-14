#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50928;
unsigned int var_7 = 2867458890U;
unsigned int var_10 = 2960496208U;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)81;
unsigned char var_15 = (unsigned char)155;
int var_16 = 1113376642;
signed char var_17 = (signed char)98;
int zero = 0;
unsigned short var_20 = (unsigned short)4807;
long long int var_21 = -2159169212980258175LL;
unsigned int var_22 = 1662124288U;
signed char var_23 = (signed char)-92;
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
