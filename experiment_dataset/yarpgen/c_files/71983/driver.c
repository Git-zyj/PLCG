#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 643527063;
unsigned int var_7 = 2504187092U;
unsigned long long int var_9 = 6278860470608363785ULL;
long long int var_10 = 6227012906207636462LL;
short var_11 = (short)18135;
short var_13 = (short)-6259;
unsigned long long int var_14 = 5141512869141975724ULL;
short var_15 = (short)-19804;
int zero = 0;
short var_16 = (short)-23806;
long long int var_17 = -6033898851948807777LL;
unsigned int var_18 = 1218136255U;
unsigned long long int var_19 = 966998736037636194ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
