#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)249;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)185;
short var_11 = (short)28818;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 18174928017884462049ULL;
unsigned char var_15 = (unsigned char)226;
signed char var_16 = (signed char)49;
int zero = 0;
unsigned long long int var_19 = 6191195561432609446ULL;
int var_20 = 781053754;
unsigned long long int var_21 = 10497456707834717608ULL;
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
