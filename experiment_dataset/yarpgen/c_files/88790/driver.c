#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 622134183799589551ULL;
unsigned char var_14 = (unsigned char)79;
unsigned char var_17 = (unsigned char)190;
int zero = 0;
short var_18 = (short)3872;
unsigned long long int var_19 = 2468929584203524616ULL;
int var_20 = -2079935000;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
