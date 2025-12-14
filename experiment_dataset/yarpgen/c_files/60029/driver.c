#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned char var_9 = (unsigned char)25;
unsigned long long int var_13 = 8001652413622873644ULL;
unsigned long long int var_15 = 8062322858947471030ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)13181;
unsigned char var_17 = (unsigned char)79;
void init() {
}

void checksum() {
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
