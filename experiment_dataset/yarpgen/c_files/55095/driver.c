#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -913406007;
unsigned long long int var_7 = 12023726726511032664ULL;
int zero = 0;
int var_13 = 53087470;
int var_14 = -729794156;
int var_15 = -977777804;
unsigned long long int var_16 = 202133971827355767ULL;
int var_17 = -486311035;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
