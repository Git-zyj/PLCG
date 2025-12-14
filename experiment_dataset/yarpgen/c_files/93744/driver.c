#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14715;
unsigned long long int var_1 = 7166067643284243326ULL;
unsigned char var_2 = (unsigned char)211;
signed char var_5 = (signed char)-45;
long long int var_7 = 6786778504717200772LL;
unsigned long long int var_8 = 4237827080230823977ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 8864003012149888881ULL;
signed char var_13 = (signed char)35;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-66;
unsigned long long int var_16 = 2037332860451071002ULL;
long long int var_17 = -4889422249884998169LL;
int var_18 = 1596006667;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)202;
unsigned char var_21 = (unsigned char)223;
unsigned short arr_0 [23] ;
unsigned char arr_1 [23] [23] ;
_Bool arr_2 [23] ;
unsigned char arr_3 [23] [23] ;
int arr_4 [23] ;
long long int arr_8 [14] ;
unsigned char arr_12 [14] ;
short arr_5 [23] ;
int arr_6 [23] ;
short arr_9 [14] ;
unsigned short arr_13 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)26306;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -175808332;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = -1413865271189175096LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)248 : (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)-2044;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 560285701;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (short)-6889;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)52797 : (unsigned short)23612;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
