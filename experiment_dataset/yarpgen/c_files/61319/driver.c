#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2395714409602389729LL;
signed char var_4 = (signed char)92;
short var_5 = (short)30513;
short var_6 = (short)21743;
long long int var_7 = -273890699757494814LL;
unsigned int var_8 = 3665624901U;
unsigned int var_12 = 1951634541U;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)15;
int var_16 = 634685087;
short var_17 = (short)23207;
int var_18 = 1156656831;
_Bool var_19 = (_Bool)0;
int var_20 = 255917037;
signed char arr_3 [18] ;
unsigned int arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 2735189763U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
