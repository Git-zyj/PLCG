#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 958970845;
unsigned long long int var_14 = 5654676149105431005ULL;
short var_15 = (short)8282;
int zero = 0;
unsigned int var_20 = 1186386864U;
unsigned short var_21 = (unsigned short)46978;
signed char var_22 = (signed char)125;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
