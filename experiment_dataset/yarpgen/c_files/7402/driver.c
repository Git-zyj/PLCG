#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
unsigned int var_2 = 2554518410U;
unsigned int var_3 = 1829679927U;
unsigned long long int var_5 = 16472534515967822934ULL;
unsigned int var_8 = 3149701438U;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)87;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2495894867U;
unsigned long long int var_14 = 8723871557519140298ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
