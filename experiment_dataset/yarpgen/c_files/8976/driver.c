#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
unsigned int var_3 = 4284952244U;
unsigned int var_4 = 750991462U;
int zero = 0;
int var_13 = -1348695642;
int var_14 = 1706026177;
unsigned long long int var_15 = 14272839035488838207ULL;
unsigned long long int var_16 = 13938152971930655240ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
