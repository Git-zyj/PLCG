#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 9047426634435643096LL;
signed char var_11 = (signed char)-26;
int zero = 0;
unsigned int var_15 = 1515841573U;
unsigned short var_16 = (unsigned short)33977;
unsigned char var_17 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
