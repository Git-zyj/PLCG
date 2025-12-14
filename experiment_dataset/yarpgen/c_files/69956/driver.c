#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 176918322;
unsigned short var_1 = (unsigned short)26162;
short var_2 = (short)-17564;
signed char var_3 = (signed char)-70;
long long int var_6 = 6101752530810266515LL;
signed char var_7 = (signed char)115;
long long int var_8 = -6136278294196532261LL;
short var_9 = (short)19151;
unsigned long long int var_10 = 15965304056281540941ULL;
long long int var_11 = 8587039524033326930LL;
int zero = 0;
int var_12 = 992902274;
unsigned char var_13 = (unsigned char)81;
signed char var_14 = (signed char)31;
unsigned char var_15 = (unsigned char)12;
unsigned long long int var_16 = 777286314590787812ULL;
unsigned long long int var_17 = 7688064515145765072ULL;
long long int var_18 = -1214223738884188321LL;
unsigned int var_19 = 1401171869U;
unsigned short var_20 = (unsigned short)5183;
signed char var_21 = (signed char)-100;
signed char var_22 = (signed char)33;
unsigned int var_23 = 3578905201U;
signed char var_24 = (signed char)-23;
unsigned long long int var_25 = 4142310454892338942ULL;
unsigned short arr_0 [14] ;
int arr_1 [14] ;
signed char arr_2 [14] [14] ;
short arr_5 [15] [15] ;
short arr_6 [15] [15] ;
unsigned long long int arr_8 [15] [15] [15] ;
long long int arr_9 [15] [15] [15] ;
unsigned long long int arr_11 [22] ;
int arr_12 [22] ;
signed char arr_13 [22] ;
long long int arr_14 [22] ;
int arr_15 [22] ;
long long int arr_3 [14] ;
int arr_4 [14] ;
signed char arr_7 [15] ;
unsigned long long int arr_10 [15] [15] ;
unsigned char arr_16 [22] ;
unsigned long long int arr_17 [22] ;
short arr_18 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)5897;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1660956601;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-919;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (short)20522;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 9129196379439554336ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -6350110018698073869LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 13222716819282632618ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 84588412;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 595065638294963491LL : 6912458406648236135LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 921755781 : -2090502639;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 5210161510697856323LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -615028361;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = 17366814714618153697ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned char)60 : (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 8155235696731384764ULL : 15840110575381280176ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (short)1231 : (short)27415;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
