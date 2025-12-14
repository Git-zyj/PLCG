#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4724027621510919454LL;
unsigned int var_1 = 3345623440U;
long long int var_3 = -7939190097048134744LL;
unsigned int var_4 = 218795335U;
unsigned int var_7 = 377568628U;
unsigned int var_8 = 1869265917U;
unsigned int var_9 = 3734809681U;
int zero = 0;
long long int var_10 = 3134478343854925994LL;
long long int var_11 = 4062540904619867816LL;
long long int var_12 = -1917524918299705403LL;
unsigned int var_13 = 733703755U;
long long int var_14 = -7823246541250027928LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
