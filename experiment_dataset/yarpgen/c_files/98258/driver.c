#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 475716765U;
unsigned int var_3 = 2934351413U;
int var_7 = -1164987336;
unsigned int var_9 = 1433946825U;
short var_10 = (short)-30116;
signed char var_12 = (signed char)118;
int zero = 0;
unsigned long long int var_14 = 433642767578599602ULL;
unsigned int var_15 = 33712094U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
