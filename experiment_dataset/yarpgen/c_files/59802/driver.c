#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_6 = 829550232779300734ULL;
unsigned long long int var_7 = 4056226379398026326ULL;
unsigned long long int var_11 = 18300368706557411961ULL;
unsigned long long int var_13 = 2152110624911054247ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)46387;
unsigned short var_18 = (unsigned short)18400;
unsigned long long int var_19 = 10356475597822417990ULL;
unsigned short var_20 = (unsigned short)1882;
_Bool var_21 = (_Bool)0;
_Bool arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
