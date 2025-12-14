#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)152;
int var_1 = -1746722977;
unsigned long long int var_2 = 967584844127189756ULL;
int var_3 = -1487885322;
unsigned long long int var_4 = 8760356755769595974ULL;
signed char var_5 = (signed char)19;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)4141;
unsigned int var_8 = 1010571271U;
unsigned int var_10 = 559691793U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 2526453353U;
signed char var_13 = (signed char)24;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 552025085U;
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
