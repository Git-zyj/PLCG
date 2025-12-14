#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)19;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)25586;
_Bool var_6 = (_Bool)0;
int var_7 = -1932545108;
long long int var_8 = -2205978232152178526LL;
unsigned char var_12 = (unsigned char)209;
int var_15 = 1628597836;
int zero = 0;
long long int var_19 = 4906943890557284125LL;
unsigned int var_20 = 3739825870U;
unsigned char var_21 = (unsigned char)160;
signed char var_22 = (signed char)59;
signed char var_23 = (signed char)-121;
unsigned short var_24 = (unsigned short)61912;
signed char var_25 = (signed char)-90;
int var_26 = -1486336124;
unsigned char var_27 = (unsigned char)174;
unsigned char arr_0 [24] [24] ;
unsigned long long int arr_1 [24] ;
unsigned char arr_2 [24] ;
short arr_5 [20] ;
unsigned int arr_11 [22] [22] ;
long long int arr_14 [22] ;
signed char arr_4 [24] ;
short arr_7 [20] ;
unsigned int arr_10 [25] [25] ;
short arr_18 [22] ;
unsigned char arr_19 [22] [22] [22] ;
unsigned int arr_20 [22] [22] [22] ;
unsigned short arr_21 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 334630840140803869ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (short)2068;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = 553468847U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = 2823930457960492417LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (short)-3208;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 1777148197U : 1382375637U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (short)-19050;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 2654210000U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (unsigned short)7101;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
