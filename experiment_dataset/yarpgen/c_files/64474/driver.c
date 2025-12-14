#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1627329735;
unsigned long long int var_8 = 5187799892551077307ULL;
int var_9 = 925519479;
unsigned int var_10 = 1852900157U;
int zero = 0;
unsigned long long int var_13 = 10792968678440963144ULL;
short var_14 = (short)-613;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
