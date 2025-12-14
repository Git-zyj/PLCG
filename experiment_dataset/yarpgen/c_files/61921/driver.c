#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3061998447843950790LL;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 13692407140620810173ULL;
unsigned long long int var_6 = 10141768948383299271ULL;
short var_7 = (short)21551;
long long int var_8 = 47966807285799680LL;
long long int var_10 = -5199139393103886195LL;
short var_11 = (short)-804;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-7760;
int zero = 0;
short var_16 = (short)-523;
long long int var_17 = -2195506337698920911LL;
long long int var_18 = 8805511953934438963LL;
unsigned short var_19 = (unsigned short)24390;
_Bool var_20 = (_Bool)0;
long long int var_21 = -5377212063516148031LL;
unsigned char var_22 = (unsigned char)76;
short var_23 = (short)-3085;
unsigned long long int var_24 = 4080238545165373517ULL;
_Bool var_25 = (_Bool)0;
unsigned short var_26 = (unsigned short)60347;
unsigned int var_27 = 1489309933U;
unsigned long long int arr_0 [18] ;
short arr_1 [18] [18] ;
long long int arr_3 [17] ;
unsigned short arr_4 [17] ;
long long int arr_5 [17] [17] ;
short arr_6 [17] ;
short arr_8 [17] [17] ;
unsigned int arr_9 [17] [17] [17] ;
int arr_10 [10] ;
unsigned char arr_2 [18] ;
_Bool arr_7 [17] ;
int arr_13 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 487526922617211287ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)5781;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -3957576254661351563LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)34076;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 6050368084498286729LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (short)12872;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-958;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1591485643U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = -1404492119;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = -66845763;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
