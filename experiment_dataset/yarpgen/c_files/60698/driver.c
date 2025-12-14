#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2695449637U;
unsigned int var_3 = 3587283855U;
short var_4 = (short)-22843;
long long int var_5 = 135396519829988257LL;
short var_6 = (short)29337;
unsigned int var_7 = 3048311907U;
unsigned int var_10 = 525189008U;
int zero = 0;
int var_11 = -2037126796;
unsigned char var_12 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
