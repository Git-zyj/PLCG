#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1261597421U;
unsigned int var_1 = 2011823455U;
unsigned int var_10 = 44691458U;
unsigned int var_12 = 954857904U;
unsigned int var_15 = 1747396621U;
int zero = 0;
unsigned int var_17 = 1949966031U;
unsigned int var_18 = 3359072642U;
unsigned int var_19 = 1865258130U;
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
