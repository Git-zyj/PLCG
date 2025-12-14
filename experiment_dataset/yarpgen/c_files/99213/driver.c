#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2799024449718808933LL;
unsigned int var_10 = 683404084U;
signed char var_12 = (signed char)122;
int zero = 0;
signed char var_13 = (signed char)91;
long long int var_14 = -1515112216108598601LL;
void init() {
}

void checksum() {
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
