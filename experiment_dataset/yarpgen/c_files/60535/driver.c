#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 498586618007715092LL;
unsigned char var_12 = (unsigned char)182;
unsigned char var_14 = (unsigned char)111;
long long int var_15 = -4174341261500068478LL;
int zero = 0;
short var_20 = (short)1703;
signed char var_21 = (signed char)87;
void init() {
}

void checksum() {
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
