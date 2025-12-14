#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_5 = (short)-11845;
unsigned long long int var_6 = 18054770949023857435ULL;
unsigned int var_13 = 1679204731U;
long long int var_14 = -6780083445026400283LL;
int zero = 0;
long long int var_19 = 1095321951100153432LL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1742386419U;
long long int var_22 = 5317667908041621064LL;
signed char var_23 = (signed char)-13;
short var_24 = (short)28908;
unsigned int arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 289965495U : 1892240250U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
