#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
unsigned int var_1 = 787534240U;
unsigned int var_3 = 3171111862U;
signed char var_4 = (signed char)-36;
unsigned int var_7 = 1441118642U;
signed char var_11 = (signed char)6;
signed char var_13 = (signed char)-61;
unsigned int var_15 = 1032426708U;
unsigned int var_17 = 399696152U;
int zero = 0;
unsigned int var_20 = 2091756783U;
unsigned int var_21 = 1093053598U;
signed char var_22 = (signed char)-37;
unsigned int var_23 = 2688417936U;
unsigned int var_24 = 2995688604U;
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
