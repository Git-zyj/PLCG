#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 609849125U;
unsigned char var_5 = (unsigned char)223;
int var_6 = 676718616;
long long int var_10 = 3395336572458220919LL;
long long int var_11 = 6615181156435015619LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3647535173U;
signed char var_14 = (signed char)3;
signed char var_15 = (signed char)88;
void init() {
}

void checksum() {
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
