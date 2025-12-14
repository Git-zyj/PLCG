#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned char var_13 = (unsigned char)202;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)81;
signed char var_16 = (signed char)87;
int zero = 0;
unsigned char var_18 = (unsigned char)47;
unsigned int var_19 = 2195698290U;
unsigned int var_20 = 555195117U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
