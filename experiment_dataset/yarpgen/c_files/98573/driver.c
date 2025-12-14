#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 2359613987247236871ULL;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 1028832224U;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)33333;
unsigned long long int var_20 = 6466901093462772931ULL;
unsigned char var_21 = (unsigned char)221;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
