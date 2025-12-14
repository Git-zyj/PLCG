#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-94;
long long int var_4 = 344556517280244842LL;
long long int var_8 = -1381669056920046714LL;
int var_10 = -1975194388;
unsigned int var_12 = 2534304619U;
signed char var_14 = (signed char)7;
long long int var_16 = 4840805677337048730LL;
unsigned int var_18 = 2514737585U;
signed char var_19 = (signed char)-64;
int zero = 0;
long long int var_20 = 6846617676075942284LL;
int var_21 = -1529521208;
unsigned int var_22 = 2779926364U;
long long int var_23 = -5865988631391771571LL;
long long int var_24 = -879767546467036301LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
