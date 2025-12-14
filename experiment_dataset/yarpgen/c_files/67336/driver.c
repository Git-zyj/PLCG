#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1623061188;
short var_1 = (short)-22231;
int var_2 = -464736423;
short var_6 = (short)-4015;
unsigned long long int var_8 = 1714129551002860680ULL;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 80675107U;
int zero = 0;
unsigned long long int var_15 = 8767235524810217694ULL;
unsigned int var_16 = 1068200202U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
