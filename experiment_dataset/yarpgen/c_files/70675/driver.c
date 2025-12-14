#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 906434568;
short var_3 = (short)-13956;
unsigned long long int var_4 = 18140673228399874311ULL;
unsigned int var_7 = 1282293473U;
unsigned int var_8 = 1580320745U;
unsigned short var_16 = (unsigned short)37023;
int zero = 0;
unsigned long long int var_20 = 8752757196416104023ULL;
signed char var_21 = (signed char)-10;
_Bool var_22 = (_Bool)0;
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
