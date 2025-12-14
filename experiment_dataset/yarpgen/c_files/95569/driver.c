#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6115812054386877147LL;
long long int var_1 = -8062176989342113438LL;
signed char var_3 = (signed char)27;
signed char var_4 = (signed char)8;
int zero = 0;
long long int var_11 = -7516133564562072788LL;
int var_12 = 2035950957;
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
