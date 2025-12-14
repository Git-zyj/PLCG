#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)32744;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-56;
int var_9 = 279931841;
signed char var_10 = (signed char)-33;
int zero = 0;
short var_14 = (short)12029;
unsigned int var_15 = 1534965405U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
