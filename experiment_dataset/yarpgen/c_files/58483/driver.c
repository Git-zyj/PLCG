#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1636648866U;
short var_4 = (short)-26335;
signed char var_6 = (signed char)9;
unsigned long long int var_9 = 11761195675654745603ULL;
int zero = 0;
unsigned int var_12 = 3537560319U;
unsigned char var_13 = (unsigned char)101;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
