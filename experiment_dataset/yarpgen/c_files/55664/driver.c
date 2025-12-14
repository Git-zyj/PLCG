#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)75;
unsigned int var_3 = 2745576667U;
int var_4 = -1322864907;
int var_9 = 1828826577;
int zero = 0;
signed char var_12 = (signed char)14;
int var_13 = 243226563;
int var_14 = 1270553959;
signed char var_15 = (signed char)51;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
