#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4659019640434065780LL;
unsigned char var_8 = (unsigned char)221;
unsigned short var_9 = (unsigned short)49135;
int var_12 = 171642990;
unsigned short var_17 = (unsigned short)59718;
unsigned long long int var_19 = 5077352007949746621ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)18;
signed char var_21 = (signed char)-42;
signed char var_22 = (signed char)-14;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
