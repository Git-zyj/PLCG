#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26191;
signed char var_2 = (signed char)60;
unsigned short var_3 = (unsigned short)20360;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 4609929563384279371ULL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)101;
unsigned int var_10 = 343120540U;
unsigned short var_11 = (unsigned short)35644;
unsigned char var_12 = (unsigned char)25;
signed char var_14 = (signed char)35;
signed char var_15 = (signed char)44;
unsigned int var_16 = 3724939778U;
signed char var_17 = (signed char)125;
int zero = 0;
signed char var_18 = (signed char)-87;
short var_19 = (short)29770;
signed char var_20 = (signed char)92;
signed char var_21 = (signed char)78;
unsigned char var_22 = (unsigned char)194;
short var_23 = (short)24971;
unsigned short var_24 = (unsigned short)18799;
unsigned short var_25 = (unsigned short)52369;
signed char var_26 = (signed char)66;
unsigned long long int var_27 = 10066099837480013213ULL;
signed char var_28 = (signed char)82;
int arr_0 [10] ;
_Bool arr_1 [10] ;
_Bool arr_4 [13] ;
_Bool arr_5 [13] [13] ;
long long int arr_8 [15] ;
unsigned int arr_9 [15] [15] ;
long long int arr_11 [18] [18] ;
unsigned short arr_2 [10] ;
unsigned int arr_3 [10] ;
unsigned short arr_6 [13] [13] ;
short arr_12 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -403168712;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 872987218473925674LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = 3625295199U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = 8268006389356444606LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)51271;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 386057662U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)58893;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (short)20410;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
