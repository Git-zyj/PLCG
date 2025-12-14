#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63397;
long long int var_11 = 1603817254230222002LL;
signed char var_14 = (signed char)28;
long long int var_16 = 7786610256123821827LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 1481369378;
unsigned int var_19 = 2586500131U;
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
