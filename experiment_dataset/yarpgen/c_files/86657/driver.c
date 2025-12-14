#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)222;
signed char var_1 = (signed char)-107;
unsigned char var_2 = (unsigned char)204;
signed char var_3 = (signed char)-111;
unsigned char var_5 = (unsigned char)244;
unsigned char var_6 = (unsigned char)246;
short var_8 = (short)-29801;
long long int var_9 = 984715672003768332LL;
unsigned short var_10 = (unsigned short)47288;
unsigned int var_11 = 2877120572U;
unsigned short var_12 = (unsigned short)31331;
unsigned char var_14 = (unsigned char)55;
int zero = 0;
unsigned char var_15 = (unsigned char)76;
unsigned char var_16 = (unsigned char)208;
unsigned char var_17 = (unsigned char)236;
unsigned int var_18 = 691346844U;
int var_19 = -304041524;
unsigned char var_20 = (unsigned char)91;
long long int var_21 = -4469282296146477429LL;
signed char var_22 = (signed char)102;
unsigned short arr_0 [19] ;
signed char arr_3 [19] ;
unsigned long long int arr_4 [19] ;
unsigned int arr_5 [19] ;
unsigned short arr_6 [19] [19] [19] [19] ;
unsigned short arr_7 [19] [19] [19] ;
int arr_8 [19] [19] [19] ;
unsigned char arr_9 [19] [19] [19] ;
unsigned short arr_12 [19] [19] ;
_Bool arr_16 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)42988;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 8464010310767354479ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 1832953798U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)36038;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)37202;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 804275134;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)18335;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
