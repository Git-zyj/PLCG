#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1917764752;
signed char var_1 = (signed char)99;
unsigned int var_2 = 25056292U;
short var_3 = (short)-11939;
int var_8 = -488251387;
long long int var_9 = -6389490415728499855LL;
int zero = 0;
short var_10 = (short)-20074;
short var_11 = (short)-13330;
unsigned char var_12 = (unsigned char)126;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
