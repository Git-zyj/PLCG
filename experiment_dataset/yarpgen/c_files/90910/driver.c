#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4527242412148368323ULL;
short var_2 = (short)12921;
unsigned long long int var_3 = 8769549105547415870ULL;
unsigned long long int var_4 = 4911264833284961089ULL;
unsigned int var_5 = 358412139U;
long long int var_6 = -6904307745943242417LL;
long long int var_8 = -7155258780614309752LL;
unsigned short var_9 = (unsigned short)59035;
short var_12 = (short)-28441;
int zero = 0;
unsigned short var_13 = (unsigned short)16862;
unsigned short var_14 = (unsigned short)25439;
signed char var_15 = (signed char)-84;
int var_16 = 636420500;
short var_17 = (short)11159;
unsigned char var_18 = (unsigned char)77;
signed char arr_0 [25] ;
unsigned char arr_1 [25] ;
unsigned short arr_2 [25] ;
short arr_5 [21] ;
_Bool arr_6 [21] ;
unsigned short arr_7 [21] ;
unsigned short arr_9 [12] [12] ;
signed char arr_10 [12] ;
signed char arr_3 [25] [25] ;
unsigned short arr_11 [12] [12] ;
signed char arr_12 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)43717;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (short)-27499;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned short)64982;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)55982;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)-88 : (signed char)-37;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)19521 : (unsigned short)31350;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)-127 : (signed char)-32;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
