#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 363088043U;
int var_1 = 1432037979;
int var_2 = 321211001;
signed char var_3 = (signed char)107;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-28;
int var_6 = -360638983;
int var_7 = 1603654219;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-85;
int zero = 0;
int var_10 = -102396254;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int var_13 = 2097437489;
unsigned int var_14 = 3535302736U;
unsigned int var_15 = 4194864812U;
int var_16 = 28667370;
int var_17 = -42484305;
signed char var_18 = (signed char)89;
signed char var_19 = (signed char)34;
int arr_0 [19] ;
int arr_1 [19] [19] ;
_Bool arr_4 [19] ;
_Bool arr_8 [19] [19] ;
int arr_9 [19] [19] ;
_Bool arr_3 [19] ;
_Bool arr_10 [19] ;
signed char arr_11 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -1093289208;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = -1999886788;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = -804237201;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (signed char)-18;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
