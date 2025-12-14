#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)56;
unsigned short var_10 = (unsigned short)30958;
unsigned char var_11 = (unsigned char)146;
int zero = 0;
signed char var_18 = (signed char)21;
unsigned short var_19 = (unsigned short)62491;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1016688970U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
