#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19832;
short var_2 = (short)25056;
_Bool var_3 = (_Bool)0;
long long int var_4 = -131570166361041666LL;
signed char var_5 = (signed char)117;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 1003665877U;
unsigned long long int var_11 = 9083074393736229841ULL;
unsigned short var_12 = (unsigned short)31932;
int zero = 0;
short var_13 = (short)21943;
unsigned long long int var_14 = 17815673282499028062ULL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 11078999166759784882ULL;
signed char arr_0 [13] [13] ;
_Bool arr_1 [13] ;
int arr_3 [13] ;
signed char arr_5 [23] ;
unsigned long long int arr_6 [23] [23] ;
signed char arr_4 [13] ;
_Bool arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -10806408;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 4762325239076020430ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
