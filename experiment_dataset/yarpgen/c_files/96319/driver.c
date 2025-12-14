#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13188039622160847411ULL;
unsigned short var_4 = (unsigned short)35332;
unsigned long long int var_8 = 9347402629186209710ULL;
int var_17 = 2114866938;
int zero = 0;
unsigned short var_19 = (unsigned short)56314;
int var_20 = 1013625093;
int var_21 = 1800896463;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)9269;
short var_24 = (short)-31121;
long long int arr_0 [20] [20] ;
unsigned long long int arr_1 [20] ;
unsigned int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = -928105160576918047LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 7357264573224671382ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 3282742517U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
