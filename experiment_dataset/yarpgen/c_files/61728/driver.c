#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -270302327479615723LL;
unsigned long long int var_3 = 1010439998860672361ULL;
int var_5 = -219536317;
unsigned long long int var_7 = 734974824702269642ULL;
_Bool var_8 = (_Bool)1;
int var_9 = -555970802;
unsigned long long int var_10 = 3726680995597550124ULL;
unsigned char var_11 = (unsigned char)148;
long long int var_12 = 7772956723109776344LL;
unsigned char var_14 = (unsigned char)29;
signed char var_15 = (signed char)-96;
unsigned int var_16 = 286592594U;
int zero = 0;
unsigned long long int var_18 = 4459464114260958395ULL;
long long int var_19 = -4757488207054156742LL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)204;
int var_22 = -177526424;
_Bool arr_1 [15] [15] ;
unsigned char arr_3 [15] [15] ;
unsigned long long int arr_4 [15] ;
int arr_5 [15] [15] [15] ;
unsigned short arr_6 [15] [15] [15] [15] [15] ;
signed char arr_7 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 16184679051286623324ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1040222967;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)14492;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-24;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
