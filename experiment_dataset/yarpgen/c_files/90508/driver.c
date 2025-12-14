#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-63;
unsigned int var_11 = 2413063883U;
short var_14 = (short)11460;
int zero = 0;
unsigned long long int var_19 = 7137224403707656376ULL;
short var_20 = (short)12045;
unsigned long long int var_21 = 14598504856543245093ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
