#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4050541995U;
unsigned int var_3 = 781464466U;
int var_4 = -854292729;
signed char var_7 = (signed char)-36;
int var_10 = -1431682177;
unsigned long long int var_12 = 818141339022215131ULL;
int zero = 0;
int var_14 = -1949962757;
short var_15 = (short)-31436;
signed char var_16 = (signed char)-85;
int var_17 = 1270560930;
_Bool var_18 = (_Bool)0;
long long int var_19 = 1064777339760147160LL;
unsigned long long int var_20 = 12463103555187490430ULL;
short var_21 = (short)27671;
unsigned long long int var_22 = 6903145583177163563ULL;
int arr_2 [11] ;
int arr_4 [11] [11] ;
unsigned char arr_6 [19] [19] ;
short arr_7 [19] ;
unsigned int arr_8 [17] ;
unsigned int arr_9 [17] ;
short arr_5 [11] [11] ;
unsigned int arr_10 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 401806438;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 48018527;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (short)19995;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 3326195141U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 1247356193U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)2813 : (short)20325;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = 3169458725U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
