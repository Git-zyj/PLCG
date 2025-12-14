#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1580732748122336810ULL;
int var_4 = 759401909;
_Bool var_8 = (_Bool)0;
int var_10 = 245706651;
int var_11 = -624273957;
short var_12 = (short)30947;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 1019428331U;
unsigned int var_19 = 729060115U;
unsigned int var_20 = 676356298U;
signed char var_21 = (signed char)69;
long long int var_22 = -2519348003373221624LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
