#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-70;
long long int var_4 = -2929254811700288769LL;
long long int var_10 = -459915686079673233LL;
signed char var_12 = (signed char)-22;
unsigned short var_13 = (unsigned short)46999;
int zero = 0;
signed char var_14 = (signed char)-37;
unsigned int var_15 = 2783080893U;
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
