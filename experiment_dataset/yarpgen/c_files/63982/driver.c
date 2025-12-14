#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2889744800U;
int var_10 = -1052164655;
unsigned int var_14 = 2746004668U;
int var_16 = 804576271;
long long int var_17 = 984846382757285910LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)12;
_Bool var_20 = (_Bool)0;
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
