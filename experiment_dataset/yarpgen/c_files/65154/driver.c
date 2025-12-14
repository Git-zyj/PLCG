#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)86;
unsigned short var_4 = (unsigned short)61001;
unsigned short var_6 = (unsigned short)16213;
signed char var_7 = (signed char)117;
unsigned char var_8 = (unsigned char)99;
signed char var_9 = (signed char)-97;
int zero = 0;
unsigned char var_10 = (unsigned char)9;
unsigned char var_11 = (unsigned char)127;
int var_12 = 724967806;
signed char var_13 = (signed char)-112;
int var_14 = 1458140617;
unsigned int var_15 = 2703998070U;
unsigned short var_16 = (unsigned short)33641;
_Bool var_17 = (_Bool)0;
unsigned int arr_0 [21] ;
_Bool arr_1 [21] ;
signed char arr_2 [21] [21] ;
unsigned char arr_3 [21] ;
unsigned int arr_4 [21] ;
unsigned short arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 4146780523U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 1248836531U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (unsigned short)16224;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
