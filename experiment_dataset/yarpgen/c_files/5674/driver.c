#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)37539;
short var_8 = (short)32288;
signed char var_9 = (signed char)-2;
short var_16 = (short)-10924;
int zero = 0;
unsigned short var_17 = (unsigned short)63298;
unsigned int var_18 = 929224994U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
