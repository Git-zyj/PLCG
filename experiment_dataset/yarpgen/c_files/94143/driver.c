#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18903;
unsigned int var_3 = 3713384017U;
short var_4 = (short)-13270;
long long int var_10 = 4712048884616522497LL;
int zero = 0;
unsigned int var_13 = 3096608345U;
short var_14 = (short)3111;
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
