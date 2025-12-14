#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)101;
short var_7 = (short)12906;
long long int var_11 = 5877403602455599724LL;
int zero = 0;
unsigned short var_12 = (unsigned short)4009;
unsigned int var_13 = 1115391494U;
int var_14 = 1388527685;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
