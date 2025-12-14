#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)79;
short var_10 = (short)-1882;
short var_11 = (short)-14541;
unsigned short var_13 = (unsigned short)51654;
signed char var_15 = (signed char)-122;
int zero = 0;
long long int var_18 = -2062159379954992847LL;
int var_19 = 549333007;
int var_20 = 484101995;
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
