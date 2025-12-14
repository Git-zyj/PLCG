#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 880173185455498178ULL;
long long int var_2 = 7021539692410023706LL;
unsigned short var_3 = (unsigned short)12633;
int var_4 = 391718284;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)53;
int var_7 = 767825814;
long long int var_8 = 3798571986379588172LL;
int var_9 = -2063850788;
int var_10 = 188553466;
long long int var_12 = 7277000387244268680LL;
unsigned char var_13 = (unsigned char)235;
signed char var_14 = (signed char)-52;
signed char var_15 = (signed char)72;
long long int var_16 = 2797559559698582896LL;
int zero = 0;
int var_17 = 235889376;
unsigned short var_18 = (unsigned short)28809;
long long int var_19 = -1890440940152405167LL;
long long int var_20 = 5901736793008821952LL;
long long int var_21 = 4241803821575526123LL;
int var_22 = 2078594069;
long long int var_23 = 8194600113682488623LL;
long long int var_24 = 1536741826594465499LL;
short var_25 = (short)-21444;
unsigned long long int var_26 = 7940642821100557841ULL;
_Bool var_27 = (_Bool)0;
unsigned char var_28 = (unsigned char)108;
signed char var_29 = (signed char)-84;
unsigned int var_30 = 2956060630U;
signed char var_31 = (signed char)-59;
long long int var_32 = -9089601489186303974LL;
_Bool var_33 = (_Bool)0;
int var_34 = -1741215213;
long long int arr_0 [25] ;
unsigned long long int arr_1 [25] ;
signed char arr_5 [25] [25] [25] ;
int arr_9 [25] [25] [25] ;
signed char arr_12 [15] [15] ;
long long int arr_19 [16] ;
signed char arr_20 [16] ;
signed char arr_29 [16] [16] [16] ;
_Bool arr_3 [25] ;
int arr_4 [25] [25] ;
int arr_18 [15] [15] ;
signed char arr_22 [16] ;
long long int arr_30 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -4123174060369986090LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 14042446114096185711ULL : 5915594287820461352ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1295173443 : -327562629;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = -2488936661537844183LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 300996135 : -818369630;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? 1174428099 : -1433612167;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (signed char)-111 : (signed char)-81;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 144613366850597858LL : 5341881436859138904LL;
}

void checksum() {
    hash(&seed, var_17);
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
