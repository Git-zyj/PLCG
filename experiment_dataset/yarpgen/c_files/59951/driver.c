#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7683569303941921364LL;
short var_4 = (short)6312;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
short var_13 = (short)-16701;
_Bool var_14 = (_Bool)0;
short var_17 = (short)-21009;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -6156643831590685011LL;
_Bool var_20 = (_Bool)0;
long long int var_21 = -8425433887976917019LL;
long long int var_22 = 2776113636697091660LL;
_Bool arr_1 [25] [25] ;
long long int arr_2 [25] [25] ;
short arr_5 [11] [11] ;
long long int arr_6 [11] ;
_Bool arr_7 [11] ;
_Bool arr_10 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = -7900134785502685166LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-3354;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 2980568468596033905LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
