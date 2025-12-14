#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3311332993U;
unsigned int var_2 = 2262823643U;
unsigned int var_5 = 1733344596U;
int zero = 0;
unsigned int var_11 = 2855423040U;
unsigned int var_12 = 2882300440U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
