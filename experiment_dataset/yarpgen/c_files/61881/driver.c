#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32344;
unsigned long long int var_1 = 8540630829338158853ULL;
long long int var_6 = -5956155694789014199LL;
unsigned int var_10 = 1976271954U;
int zero = 0;
unsigned int var_15 = 640039068U;
unsigned long long int var_16 = 17546390539133039146ULL;
short var_17 = (short)1447;
short var_18 = (short)13982;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
