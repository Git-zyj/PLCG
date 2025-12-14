#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6898059478825164192LL;
unsigned long long int var_11 = 3078465170043502638ULL;
short var_12 = (short)-4215;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 14084727150977588851ULL;
unsigned int var_19 = 3516186770U;
long long int var_20 = -6910009038243664545LL;
short var_21 = (short)8506;
long long int var_22 = 4467675668105316732LL;
int var_23 = -1790283361;
long long int var_24 = 1556910766763009332LL;
unsigned long long int var_25 = 18081478789565333223ULL;
signed char arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)95;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
