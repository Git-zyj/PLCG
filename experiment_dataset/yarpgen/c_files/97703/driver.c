#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)32276;
unsigned int var_5 = 3705881137U;
short var_7 = (short)21523;
int var_8 = 2016720258;
int zero = 0;
unsigned char var_13 = (unsigned char)191;
short var_14 = (short)15943;
long long int var_15 = 8397341296826477261LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
