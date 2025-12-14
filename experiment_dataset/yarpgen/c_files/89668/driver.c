#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1270729553U;
unsigned char var_2 = (unsigned char)135;
unsigned char var_9 = (unsigned char)91;
int zero = 0;
unsigned char var_16 = (unsigned char)77;
unsigned char var_17 = (unsigned char)109;
int var_18 = -2007891289;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
