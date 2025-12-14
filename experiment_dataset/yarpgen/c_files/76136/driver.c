#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5261959699017792887LL;
_Bool var_1 = (_Bool)1;
long long int var_5 = 257182338290033720LL;
signed char var_8 = (signed char)30;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 2624578065U;
long long int var_13 = -2998659100165382043LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
