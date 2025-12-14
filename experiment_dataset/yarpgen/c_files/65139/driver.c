#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-11227;
short var_7 = (short)23506;
long long int var_10 = 3237101537686844033LL;
int zero = 0;
unsigned int var_13 = 4044071824U;
unsigned char var_14 = (unsigned char)60;
long long int var_15 = 1500683243057847217LL;
void init() {
}

void checksum() {
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
