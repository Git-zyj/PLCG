#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2203795365U;
unsigned int var_6 = 2318235635U;
unsigned int var_8 = 1335625438U;
unsigned int var_11 = 1205931571U;
unsigned int var_12 = 1079888617U;
unsigned int var_13 = 2201239513U;
unsigned int var_14 = 1341295217U;
int zero = 0;
unsigned int var_16 = 3858422486U;
unsigned int var_17 = 1919746962U;
unsigned int var_18 = 2547765457U;
unsigned int var_19 = 4286851941U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
