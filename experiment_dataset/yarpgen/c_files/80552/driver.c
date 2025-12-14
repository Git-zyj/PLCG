#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)33;
_Bool var_7 = (_Bool)1;
long long int var_8 = -7877334282999080685LL;
int zero = 0;
unsigned int var_11 = 4036965938U;
unsigned short var_12 = (unsigned short)39197;
void init() {
}

void checksum() {
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
