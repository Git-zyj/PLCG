#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 322116465U;
unsigned char var_2 = (unsigned char)48;
long long int var_4 = 3423058805303653284LL;
unsigned char var_11 = (unsigned char)49;
int zero = 0;
short var_18 = (short)9304;
signed char var_19 = (signed char)49;
short var_20 = (short)-30473;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
