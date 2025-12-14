#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4979512253520498489LL;
unsigned long long int var_1 = 9188767876908288039ULL;
unsigned int var_2 = 3960206836U;
int var_3 = 2017662408;
unsigned char var_5 = (unsigned char)32;
long long int var_7 = -5696707955781380650LL;
int var_10 = 792494534;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)191;
int zero = 0;
long long int var_13 = 8206702203203949150LL;
unsigned long long int var_14 = 18025460688058045221ULL;
long long int var_15 = -8232453998267323949LL;
unsigned long long int var_16 = 7412263115957273846ULL;
short var_17 = (short)-29257;
_Bool var_18 = (_Bool)0;
long long int arr_0 [20] ;
_Bool arr_1 [20] [20] ;
long long int arr_2 [20] ;
unsigned int arr_3 [20] [20] [20] ;
unsigned long long int arr_5 [20] ;
short arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 3668592416499823552LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 3467700277652390539LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3610114121U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 15760545285926086693ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (short)12422;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
