#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2828184174U;
unsigned long long int var_5 = 15059983942964116614ULL;
unsigned char var_10 = (unsigned char)159;
int zero = 0;
unsigned long long int var_16 = 16911022448323650654ULL;
unsigned char var_17 = (unsigned char)80;
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
