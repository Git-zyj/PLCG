#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9345;
_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)48210;
int var_4 = -487427896;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)82;
unsigned short var_10 = (unsigned short)29454;
unsigned short var_12 = (unsigned short)22789;
long long int var_13 = -140255542948573518LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_16 = -5896698686464233268LL;
signed char var_17 = (signed char)-10;
unsigned long long int var_18 = 5657784330218258101ULL;
int var_19 = 1936584512;
unsigned short var_20 = (unsigned short)32357;
int var_21 = 1456661307;
int var_22 = -1733844077;
int arr_0 [13] ;
unsigned char arr_1 [13] ;
short arr_2 [13] ;
unsigned short arr_4 [13] ;
_Bool arr_7 [12] ;
int arr_9 [17] ;
long long int arr_10 [17] ;
unsigned int arr_11 [17] [17] ;
short arr_12 [17] ;
int arr_14 [17] ;
int arr_15 [17] [17] [17] ;
unsigned int arr_16 [17] [17] [17] ;
long long int arr_5 [13] [13] [13] ;
int arr_8 [12] [12] ;
short arr_17 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1812054695;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)0 : (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)4662 : (short)7261;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)23875 : (unsigned short)46983;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = -1210181741;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = -3921831522514482709LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = 4203730852U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (short)9435;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = 1373161921;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1949523560 : 1961996847;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 3609290780U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -602460940267840847LL : -741746555744491804LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = -1816828520;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-23920 : (short)7585;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
