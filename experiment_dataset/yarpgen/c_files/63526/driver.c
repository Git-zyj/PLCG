#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)50260;
unsigned long long int var_5 = 7406148857827088781ULL;
long long int var_13 = 7031195851929077223LL;
int zero = 0;
signed char var_20 = (signed char)-101;
short var_21 = (short)-3667;
void init() {
}

void checksum() {
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
