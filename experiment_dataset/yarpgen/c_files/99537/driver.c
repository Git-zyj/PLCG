#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6606893492423005028LL;
int var_2 = -1788228886;
unsigned short var_4 = (unsigned short)59202;
signed char var_5 = (signed char)-32;
unsigned long long int var_6 = 12042197789345118580ULL;
unsigned short var_8 = (unsigned short)424;
unsigned short var_11 = (unsigned short)10958;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 4096621155820343397ULL;
long long int var_14 = -790010404016395314LL;
int var_15 = -744688823;
unsigned short var_16 = (unsigned short)19219;
long long int var_17 = -4392221710053680277LL;
int zero = 0;
unsigned char var_18 = (unsigned char)206;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 5872169092583720849ULL;
unsigned long long int var_21 = 12627533222666423109ULL;
short var_22 = (short)-21964;
_Bool var_23 = (_Bool)1;
long long int var_24 = 8383450069362406202LL;
long long int var_25 = 5607063196114238126LL;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)52939;
unsigned char var_28 = (unsigned char)187;
short var_29 = (short)29438;
unsigned long long int var_30 = 17576604966508678312ULL;
long long int arr_0 [10] ;
unsigned int arr_1 [10] [10] ;
unsigned long long int arr_4 [19] ;
unsigned long long int arr_6 [19] [19] ;
signed char arr_15 [15] ;
signed char arr_18 [14] ;
int arr_2 [10] ;
int arr_3 [10] ;
_Bool arr_17 [15] ;
long long int arr_34 [14] [14] [14] [14] [14] ;
short arr_35 [14] [14] [14] ;
int arr_36 [14] ;
int arr_44 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 5655320326491000671LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 3316692307U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 6405824095158341324ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 18164831382217645949ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -635024875;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 880492453;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = -7862822828153775118LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (short)-18731;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_36 [i_0] = 1154208460;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = 155371071;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_44 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
