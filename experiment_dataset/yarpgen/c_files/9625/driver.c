#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
long long int var_1 = 8363775115979593320LL;
long long int var_2 = 946883172013300445LL;
signed char var_3 = (signed char)-3;
long long int var_4 = 7526668372679399824LL;
short var_6 = (short)28233;
unsigned short var_8 = (unsigned short)33427;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-101;
int zero = 0;
unsigned int var_11 = 3927723335U;
_Bool var_12 = (_Bool)0;
int var_13 = 1214391055;
unsigned int var_14 = 4063064150U;
int var_15 = -1432496675;
int var_16 = 1822892841;
unsigned short var_17 = (unsigned short)60372;
int var_18 = 600535975;
unsigned int var_19 = 419538398U;
signed char var_20 = (signed char)-108;
signed char var_21 = (signed char)31;
signed char var_22 = (signed char)-14;
unsigned int arr_0 [13] ;
unsigned int arr_1 [13] [13] ;
unsigned int arr_2 [13] ;
unsigned int arr_4 [11] ;
unsigned int arr_5 [11] [11] ;
unsigned int arr_8 [11] [11] [11] ;
signed char arr_11 [11] ;
unsigned short arr_3 [13] ;
long long int arr_6 [11] ;
short arr_12 [11] ;
unsigned int arr_15 [12] ;
unsigned int arr_16 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 98344474U : 1283763686U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 4278283949U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 2372719960U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1041856487U : 3201494803U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 1013085303U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1115431479U : 1739361214U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)30098 : (unsigned short)14741;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -1725801410719668842LL : 8423825935828006193LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)20264 : (short)-15715;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = 1757537879U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = 2485145849U;
}

void checksum() {
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
