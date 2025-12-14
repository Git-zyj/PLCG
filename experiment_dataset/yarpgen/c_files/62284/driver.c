#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -166544760;
int var_1 = -1412218982;
short var_2 = (short)-4973;
unsigned char var_4 = (unsigned char)95;
short var_5 = (short)11668;
unsigned char var_6 = (unsigned char)89;
int var_10 = -466677258;
int zero = 0;
unsigned int var_16 = 2061988879U;
long long int var_17 = 3445385151722007266LL;
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
