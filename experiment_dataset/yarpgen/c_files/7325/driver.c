#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 387129853627488381ULL;
unsigned int var_3 = 3353037564U;
signed char var_9 = (signed char)-6;
int zero = 0;
int var_11 = 1588648030;
unsigned short var_12 = (unsigned short)36579;
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
