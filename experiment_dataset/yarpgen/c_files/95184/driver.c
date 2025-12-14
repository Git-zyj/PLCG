#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5406195132057202897ULL;
long long int var_3 = 1056755752825989045LL;
unsigned short var_5 = (unsigned short)3392;
signed char var_6 = (signed char)111;
unsigned short var_10 = (unsigned short)53736;
int zero = 0;
short var_11 = (short)15530;
signed char var_12 = (signed char)52;
unsigned int var_13 = 1299323996U;
short var_14 = (short)-13808;
signed char var_15 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
