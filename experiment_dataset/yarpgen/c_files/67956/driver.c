#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 136074291;
unsigned long long int var_1 = 1770009183310039230ULL;
unsigned long long int var_2 = 16399235343854084301ULL;
signed char var_3 = (signed char)-73;
unsigned long long int var_4 = 12320573251729936016ULL;
unsigned int var_6 = 731143645U;
signed char var_7 = (signed char)-34;
unsigned long long int var_10 = 15590914783557216039ULL;
unsigned long long int var_11 = 16282165451088460093ULL;
unsigned long long int var_12 = 9797080611059400420ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 7792157202484793958ULL;
unsigned char var_15 = (unsigned char)168;
unsigned long long int var_16 = 5167910004431840762ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)14011;
short var_18 = (short)13046;
unsigned short var_19 = (unsigned short)14888;
short var_20 = (short)-4049;
unsigned short var_21 = (unsigned short)20702;
long long int var_22 = -1378219371348030272LL;
int var_23 = -1543362882;
unsigned short var_24 = (unsigned short)47518;
int var_25 = -240181361;
unsigned short var_26 = (unsigned short)25098;
unsigned short arr_0 [24] ;
long long int arr_1 [24] ;
_Bool arr_3 [24] ;
unsigned long long int arr_4 [24] [24] [24] ;
int arr_5 [24] ;
int arr_7 [24] ;
unsigned long long int arr_8 [24] [24] ;
unsigned short arr_9 [24] ;
unsigned long long int arr_17 [14] ;
unsigned short arr_21 [24] [24] ;
unsigned long long int arr_2 [24] [24] ;
unsigned long long int arr_10 [24] [24] ;
long long int arr_11 [24] ;
unsigned short arr_12 [24] ;
int arr_15 [24] [24] ;
short arr_16 [24] ;
long long int arr_20 [14] ;
unsigned long long int arr_23 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)32047;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -4230464846160867320LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 13264567424798297974ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 1539968017;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = -1392795929;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = 12526608836591164747ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned short)43080;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = 17004256790936240708ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)35434;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 9734736610510770236ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = 10384066279431915806ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = -6289463116357981108LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (unsigned short)796;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = 2051917664;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (short)3124;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = 3232218699587878714LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = 10172743697656427553ULL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
