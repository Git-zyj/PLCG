#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3327;
unsigned long long int var_2 = 8544244202908333900ULL;
unsigned short var_5 = (unsigned short)62102;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)34705;
int zero = 0;
unsigned long long int var_10 = 465831322795424713ULL;
unsigned int var_11 = 1337688597U;
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
