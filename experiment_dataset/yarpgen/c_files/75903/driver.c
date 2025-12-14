#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4176;
unsigned short var_1 = (unsigned short)208;
int var_2 = 278797467;
unsigned long long int var_5 = 3043821670115703136ULL;
_Bool var_7 = (_Bool)1;
int var_12 = 40178276;
int zero = 0;
signed char var_13 = (signed char)-18;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 1751299154377840388ULL;
short var_16 = (short)-21590;
int arr_1 [12] [12] ;
unsigned char arr_3 [25] ;
long long int arr_4 [25] ;
signed char arr_8 [25] [25] ;
long long int arr_10 [25] ;
short arr_11 [25] [25] [25] [25] ;
_Bool arr_12 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 1189860178;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 736284226416263727LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 1877858873753456148LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)21228;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
