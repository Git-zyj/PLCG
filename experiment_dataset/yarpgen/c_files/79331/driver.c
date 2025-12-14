#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 266284135;
unsigned char var_1 = (unsigned char)95;
unsigned int var_2 = 2779727437U;
unsigned char var_3 = (unsigned char)168;
unsigned short var_5 = (unsigned short)47852;
signed char var_6 = (signed char)-51;
int var_7 = 177046896;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-44;
unsigned long long int var_11 = 13236910951618175192ULL;
int var_12 = 792735664;
long long int var_13 = -8213351459366311696LL;
short arr_0 [18] ;
unsigned short arr_1 [18] ;
unsigned short arr_4 [18] [18] [18] ;
unsigned long long int arr_5 [18] ;
signed char arr_6 [18] ;
unsigned char arr_10 [18] ;
long long int arr_13 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)32494;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)36412;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)3986;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 2772899879920878678ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = -7030656612381003155LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
