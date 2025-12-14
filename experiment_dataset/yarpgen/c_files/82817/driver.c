#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22292;
long long int var_3 = -286195204064348334LL;
long long int var_15 = 8102389512570078786LL;
short var_16 = (short)-15321;
signed char var_17 = (signed char)-4;
int zero = 0;
int var_19 = 13177244;
signed char var_20 = (signed char)-25;
void init() {
}

void checksum() {
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
