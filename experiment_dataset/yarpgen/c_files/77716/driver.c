#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3759782362U;
_Bool var_5 = (_Bool)0;
unsigned long long int var_11 = 13259101713883359849ULL;
long long int var_14 = 6126091109528487482LL;
int zero = 0;
long long int var_19 = -6568009781051722640LL;
int var_20 = 119905861;
unsigned char var_21 = (unsigned char)42;
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
