#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)221;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
int var_11 = 1840628050;
unsigned char var_12 = (unsigned char)125;
unsigned char var_14 = (unsigned char)46;
int var_15 = 564751270;
int zero = 0;
signed char var_18 = (signed char)56;
signed char var_19 = (signed char)-61;
int var_20 = 5613744;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
