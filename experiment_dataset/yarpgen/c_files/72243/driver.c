#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21882;
int var_5 = -1525079539;
unsigned char var_9 = (unsigned char)231;
unsigned long long int var_12 = 16964925956415252888ULL;
unsigned long long int var_15 = 16149526646540229498ULL;
int zero = 0;
unsigned int var_17 = 1443711124U;
unsigned int var_18 = 1347496573U;
unsigned int var_19 = 2632763294U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
