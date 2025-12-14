#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11226795951817551589ULL;
unsigned short var_5 = (unsigned short)51918;
unsigned int var_11 = 1584420809U;
unsigned long long int var_12 = 2967818531500043193ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)17330;
int var_15 = -1107679933;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
