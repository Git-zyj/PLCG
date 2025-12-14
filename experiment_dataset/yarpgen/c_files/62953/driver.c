#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15373332398363855128ULL;
unsigned long long int var_8 = 8593964500825545193ULL;
unsigned short var_10 = (unsigned short)15118;
unsigned short var_14 = (unsigned short)8263;
int zero = 0;
short var_16 = (short)-13632;
unsigned short var_17 = (unsigned short)39323;
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
