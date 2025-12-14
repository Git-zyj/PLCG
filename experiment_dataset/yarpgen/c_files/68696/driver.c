#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2331715579U;
unsigned char var_2 = (unsigned char)90;
signed char var_4 = (signed char)28;
short var_9 = (short)12795;
short var_11 = (short)-15779;
int zero = 0;
unsigned long long int var_14 = 8479636620132959589ULL;
unsigned char var_15 = (unsigned char)3;
int var_16 = -997312889;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
