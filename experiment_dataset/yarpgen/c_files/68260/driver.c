#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)29;
unsigned int var_2 = 2243860348U;
signed char var_4 = (signed char)81;
unsigned char var_5 = (unsigned char)247;
unsigned long long int var_8 = 11703422936091739386ULL;
signed char var_10 = (signed char)-107;
int zero = 0;
unsigned long long int var_14 = 8767851654833643863ULL;
unsigned long long int var_15 = 7164718887177593425ULL;
void init() {
}

void checksum() {
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
