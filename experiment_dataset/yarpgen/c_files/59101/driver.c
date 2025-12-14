#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22501;
unsigned int var_4 = 3056099037U;
unsigned int var_12 = 1514352104U;
short var_13 = (short)26321;
int zero = 0;
unsigned int var_15 = 1703029991U;
unsigned int var_16 = 3178111338U;
unsigned int var_17 = 327291669U;
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
