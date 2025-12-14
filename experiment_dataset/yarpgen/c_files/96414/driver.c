#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4435;
long long int var_1 = 1547782244229366341LL;
signed char var_7 = (signed char)74;
int var_16 = -598030100;
int zero = 0;
int var_17 = -1225280462;
signed char var_18 = (signed char)32;
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
