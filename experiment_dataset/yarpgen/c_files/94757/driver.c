#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2691289760U;
unsigned int var_4 = 1637704234U;
unsigned int var_7 = 1904875947U;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)34;
int zero = 0;
int var_17 = 1544577602;
signed char var_18 = (signed char)88;
int var_19 = -1544784575;
void init() {
}

void checksum() {
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
