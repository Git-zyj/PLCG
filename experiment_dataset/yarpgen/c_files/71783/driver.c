#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)45;
signed char var_1 = (signed char)(-127 - 1);
unsigned int var_2 = 1808327629U;
unsigned char var_3 = (unsigned char)67;
short var_4 = (short)-9292;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)10804;
unsigned int var_7 = 640267182U;
long long int var_8 = 7504257009600414080LL;
unsigned short var_9 = (unsigned short)24527;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 15332548309007465054ULL;
unsigned long long int var_12 = 266285174224722686ULL;
signed char var_13 = (signed char)82;
signed char var_14 = (signed char)-122;
long long int var_16 = -7663153886480205426LL;
int zero = 0;
signed char var_17 = (signed char)-54;
signed char var_18 = (signed char)-126;
unsigned long long int var_19 = 10374326590308223405ULL;
unsigned short var_20 = (unsigned short)9238;
unsigned short var_21 = (unsigned short)49745;
signed char var_22 = (signed char)124;
int var_23 = -997200696;
_Bool arr_0 [22] ;
unsigned char arr_1 [22] ;
unsigned int arr_2 [22] ;
unsigned long long int arr_4 [22] [22] [22] ;
unsigned short arr_5 [22] ;
unsigned short arr_10 [22] [22] [22] [22] ;
long long int arr_11 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 1487453810U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 8968142603062048917ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)8087;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)13124 : (unsigned short)62714;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 2875927815080503023LL : -1496027953637235458LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
