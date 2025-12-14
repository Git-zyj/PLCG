#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)244;
unsigned char var_1 = (unsigned char)174;
signed char var_3 = (signed char)118;
unsigned long long int var_4 = 10037727745550557403ULL;
short var_7 = (short)-5475;
int zero = 0;
int var_10 = -2145696276;
short var_11 = (short)-25667;
unsigned char var_12 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
