#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8311451188174267910LL;
long long int var_2 = 8511349341893866652LL;
unsigned int var_4 = 4017160467U;
unsigned int var_6 = 3232710810U;
int zero = 0;
unsigned int var_18 = 2524474992U;
unsigned int var_19 = 2471193643U;
void init() {
}

void checksum() {
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
