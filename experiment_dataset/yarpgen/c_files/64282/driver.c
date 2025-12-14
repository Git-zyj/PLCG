#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21950;
long long int var_8 = -8529112791631514644LL;
unsigned char var_14 = (unsigned char)215;
short var_18 = (short)-18495;
int zero = 0;
short var_20 = (short)28271;
signed char var_21 = (signed char)-23;
signed char var_22 = (signed char)38;
short var_23 = (short)-32564;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
