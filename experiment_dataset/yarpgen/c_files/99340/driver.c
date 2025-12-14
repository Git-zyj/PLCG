#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)142;
unsigned short var_2 = (unsigned short)20137;
long long int var_5 = 6761015097443600876LL;
long long int var_8 = 3101115413352191434LL;
int zero = 0;
unsigned char var_12 = (unsigned char)98;
short var_13 = (short)-1483;
unsigned char var_14 = (unsigned char)215;
long long int var_15 = -5544844819095543253LL;
short var_16 = (short)-4775;
unsigned short var_17 = (unsigned short)61272;
signed char var_18 = (signed char)-53;
_Bool var_19 = (_Bool)1;
_Bool arr_0 [17] ;
unsigned int arr_1 [17] ;
_Bool arr_2 [18] ;
unsigned short arr_4 [18] ;
short arr_6 [18] [18] ;
signed char arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 404637550U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)64431;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (short)29500;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (signed char)-2;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
