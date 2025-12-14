#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1796942712;
unsigned char var_2 = (unsigned char)207;
long long int var_3 = 8827413787338656070LL;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)62;
unsigned int var_12 = 3597952401U;
unsigned int var_14 = 147835627U;
int zero = 0;
long long int var_20 = -1646954547858162673LL;
_Bool var_21 = (_Bool)1;
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
