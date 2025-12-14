#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2336466214U;
unsigned int var_2 = 2066262067U;
long long int var_3 = -4636388241719687984LL;
unsigned int var_7 = 1590359341U;
signed char var_8 = (signed char)74;
int zero = 0;
long long int var_10 = -1736208605355006247LL;
short var_11 = (short)-3327;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
