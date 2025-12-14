#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5156183090223741176LL;
signed char var_8 = (signed char)-39;
signed char var_9 = (signed char)14;
short var_14 = (short)-28461;
int zero = 0;
long long int var_16 = 1426377945203396534LL;
int var_17 = 794552052;
signed char var_18 = (signed char)68;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-98;
short var_21 = (short)979;
long long int var_22 = 4179016151232009371LL;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
unsigned long long int arr_3 [11] [11] [11] ;
int arr_4 [11] ;
signed char arr_11 [20] ;
signed char arr_12 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3017168340439548148ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 271495719;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-73;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
