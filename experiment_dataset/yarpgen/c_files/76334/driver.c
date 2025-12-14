#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6407781437135733865LL;
unsigned int var_11 = 2579278076U;
long long int var_13 = -1004808828359510052LL;
long long int var_15 = -8614933943710981813LL;
int zero = 0;
int var_16 = -879860677;
unsigned int var_17 = 3451453207U;
long long int var_18 = -2034468756591496189LL;
void init() {
}

void checksum() {
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
