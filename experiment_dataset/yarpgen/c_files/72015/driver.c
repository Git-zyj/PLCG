#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 618121897532356162ULL;
long long int var_3 = -4618072589400453268LL;
unsigned int var_4 = 3150351702U;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 1358060382U;
unsigned long long int var_12 = 6969304259560008090ULL;
signed char var_14 = (signed char)13;
int zero = 0;
unsigned long long int var_16 = 12440378808104022238ULL;
unsigned long long int var_17 = 10676176060273356726ULL;
long long int var_18 = -4414212249523115349LL;
unsigned long long int var_19 = 8414539931705387376ULL;
_Bool arr_1 [13] ;
signed char arr_3 [13] [13] ;
_Bool arr_4 [13] ;
unsigned long long int arr_6 [13] ;
int arr_7 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 14306598666943096381ULL : 9208458192943482399ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -2125685515 : -987121281;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
