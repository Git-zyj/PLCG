#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-68;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)58;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)252;
short var_13 = (short)-14774;
int zero = 0;
signed char var_14 = (signed char)116;
unsigned char var_15 = (unsigned char)138;
long long int var_16 = 8269976890867804839LL;
int var_17 = -1474392294;
int var_18 = 607963419;
unsigned long long int arr_0 [11] [11] ;
_Bool arr_5 [17] ;
signed char arr_2 [11] ;
long long int arr_3 [11] ;
unsigned long long int arr_4 [11] ;
unsigned long long int arr_8 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 6839627440461922918ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-21 : (signed char)67;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -7730538227405948672LL : -3318134785145140240LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 10380459053210754492ULL : 8375299807830577598ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = 15191528963332341053ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
