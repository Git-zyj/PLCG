#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned int var_7 = 1310462452U;
_Bool var_12 = (_Bool)1;
long long int var_13 = -7230027090193690473LL;
unsigned int var_14 = 3250726706U;
unsigned int var_17 = 1174289939U;
int zero = 0;
long long int var_20 = 3933797468424914501LL;
unsigned int var_21 = 1513491511U;
signed char var_22 = (signed char)26;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
