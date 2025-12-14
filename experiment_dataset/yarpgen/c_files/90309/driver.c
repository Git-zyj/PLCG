#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-3643;
unsigned long long int var_8 = 2339449299021914243ULL;
unsigned long long int var_9 = 9201521654699345063ULL;
unsigned int var_15 = 87129313U;
int zero = 0;
unsigned char var_17 = (unsigned char)142;
signed char var_18 = (signed char)-33;
void init() {
}

void checksum() {
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
