#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4096294917U;
unsigned int var_4 = 1973749772U;
unsigned char var_6 = (unsigned char)176;
int zero = 0;
short var_11 = (short)-5750;
unsigned short var_12 = (unsigned short)4697;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
