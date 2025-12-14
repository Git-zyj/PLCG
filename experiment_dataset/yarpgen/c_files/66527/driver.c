#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8548810281299000143ULL;
_Bool var_2 = (_Bool)0;
signed char var_7 = (signed char)86;
unsigned long long int var_12 = 10914816392742163047ULL;
unsigned long long int var_15 = 7177862435812019725ULL;
signed char var_16 = (signed char)-67;
int zero = 0;
unsigned long long int var_17 = 16011432506519152224ULL;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1799153501U;
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
