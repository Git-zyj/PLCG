#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13749;
short var_1 = (short)31024;
signed char var_2 = (signed char)-97;
int var_3 = 1397461488;
signed char var_4 = (signed char)70;
unsigned long long int var_5 = 6221741927369642728ULL;
short var_6 = (short)29252;
int zero = 0;
unsigned long long int var_13 = 405759421622002705ULL;
unsigned int var_14 = 3962674461U;
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
