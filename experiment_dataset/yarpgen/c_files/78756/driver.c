#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7470611482990178660LL;
unsigned short var_1 = (unsigned short)21549;
long long int var_2 = -4299150237136637895LL;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 14934650257010418713ULL;
int var_6 = 496489886;
unsigned short var_8 = (unsigned short)52621;
long long int var_10 = -1400502634492372981LL;
unsigned char var_12 = (unsigned char)71;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)16;
unsigned short var_15 = (unsigned short)57810;
long long int var_16 = 3772263697414469092LL;
signed char var_17 = (signed char)104;
long long int var_18 = -6694544272267396118LL;
unsigned int var_19 = 3353862855U;
unsigned short var_20 = (unsigned short)36332;
long long int arr_0 [23] ;
short arr_1 [23] ;
unsigned long long int arr_3 [11] ;
unsigned char arr_4 [11] [11] ;
unsigned short arr_5 [11] ;
short arr_6 [11] ;
unsigned int arr_7 [11] [11] [11] ;
signed char arr_8 [11] [11] [11] ;
int arr_9 [11] [11] ;
unsigned short arr_2 [23] ;
unsigned char arr_10 [11] [11] ;
long long int arr_11 [11] ;
signed char arr_15 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2495611318480164210LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-8090;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 12606415047796381715ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)48058;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (short)-25511;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 927540192U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = 1770298715;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)13178;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)148 : (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -4407363088837901127LL : -7164151103179327653LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (signed char)77;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
