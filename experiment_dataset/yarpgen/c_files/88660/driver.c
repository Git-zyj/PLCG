#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)50;
_Bool var_4 = (_Bool)1;
_Bool var_10 = (_Bool)1;
short var_13 = (short)-14260;
unsigned long long int var_14 = 2983982172473252036ULL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2559914701U;
int zero = 0;
unsigned int var_18 = 2361857402U;
int var_19 = -1200523775;
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
