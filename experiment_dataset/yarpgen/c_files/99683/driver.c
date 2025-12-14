#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3136035763U;
unsigned long long int var_2 = 4182406592379780400ULL;
signed char var_10 = (signed char)115;
short var_15 = (short)-17739;
int zero = 0;
unsigned char var_16 = (unsigned char)171;
unsigned char var_17 = (unsigned char)229;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
