#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 338391134;
int var_1 = -446194754;
unsigned int var_4 = 647071286U;
signed char var_5 = (signed char)-106;
short var_6 = (short)-13667;
short var_7 = (short)27353;
int zero = 0;
unsigned char var_10 = (unsigned char)105;
unsigned int var_11 = 2951753590U;
unsigned int var_12 = 343399328U;
unsigned int var_13 = 85823929U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
