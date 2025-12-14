#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3675248719U;
long long int var_4 = -4099134170282521871LL;
int var_5 = -1706539600;
int var_7 = -598673045;
int var_10 = 317163015;
long long int var_12 = -8071907337202718501LL;
int zero = 0;
long long int var_14 = 3289315722685384745LL;
long long int var_15 = -4658076933503373658LL;
signed char var_16 = (signed char)124;
unsigned int var_17 = 779644694U;
void init() {
}

void checksum() {
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
