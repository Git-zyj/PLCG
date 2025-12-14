#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)109;
unsigned long long int var_2 = 9217075342132079485ULL;
signed char var_12 = (signed char)77;
int zero = 0;
unsigned short var_20 = (unsigned short)54409;
unsigned long long int var_21 = 13031116309053972300ULL;
int var_22 = -123667213;
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
