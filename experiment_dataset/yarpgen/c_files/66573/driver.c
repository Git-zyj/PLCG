#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
signed char var_5 = (signed char)93;
_Bool var_11 = (_Bool)0;
int var_14 = -1839967094;
int zero = 0;
signed char var_15 = (signed char)51;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 1606609480734005441ULL;
int var_18 = 869022534;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
