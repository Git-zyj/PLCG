#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3660428639161136615LL;
unsigned int var_1 = 2143106235U;
unsigned short var_2 = (unsigned short)9284;
int var_3 = -675472;
unsigned char var_5 = (unsigned char)190;
int var_7 = 1584856097;
unsigned int var_8 = 2901185235U;
unsigned short var_9 = (unsigned short)46012;
unsigned int var_10 = 316898673U;
unsigned char var_12 = (unsigned char)122;
long long int var_13 = -7750362246438840491LL;
int zero = 0;
signed char var_14 = (signed char)43;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 14165085591122480356ULL;
unsigned char var_17 = (unsigned char)231;
_Bool var_18 = (_Bool)0;
long long int var_19 = -5227135396864443098LL;
unsigned int var_20 = 2733462515U;
unsigned int var_21 = 3258435760U;
_Bool var_22 = (_Bool)0;
unsigned long long int arr_4 [25] [25] ;
unsigned char arr_7 [25] ;
_Bool arr_13 [25] [25] [25] [25] ;
unsigned char arr_15 [25] [25] [25] [25] ;
_Bool arr_12 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 15136217771034354023ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
