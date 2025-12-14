#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 335042896;
int var_2 = -1013032389;
signed char var_3 = (signed char)65;
unsigned long long int var_4 = 5803944859402687592ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_16 = 14353584028980559259ULL;
unsigned long long int var_17 = 4000200056684030648ULL;
unsigned char var_19 = (unsigned char)73;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 2633857827917099610ULL;
signed char var_23 = (signed char)41;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
