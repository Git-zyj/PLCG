#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 653927034U;
unsigned int var_5 = 2960425999U;
int var_6 = 15236880;
unsigned short var_7 = (unsigned short)25329;
unsigned int var_10 = 1312329913U;
int var_12 = -1095179046;
int zero = 0;
signed char var_13 = (signed char)-13;
short var_14 = (short)10583;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
