#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)66;
short var_7 = (short)-18519;
signed char var_8 = (signed char)5;
_Bool var_9 = (_Bool)0;
long long int var_12 = 8028041518518795948LL;
unsigned char var_13 = (unsigned char)64;
int zero = 0;
unsigned int var_15 = 2474156839U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
