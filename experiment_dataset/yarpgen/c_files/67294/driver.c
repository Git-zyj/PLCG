#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)47528;
unsigned int var_2 = 2600308324U;
unsigned long long int var_3 = 7156183889925013365ULL;
unsigned char var_5 = (unsigned char)28;
_Bool var_6 = (_Bool)0;
int var_7 = 1879043030;
int var_8 = -272859402;
int var_9 = 1477331118;
int var_10 = 1185838196;
signed char var_11 = (signed char)80;
int var_12 = -328969462;
unsigned short var_13 = (unsigned short)3244;
unsigned char var_14 = (unsigned char)159;
_Bool var_15 = (_Bool)1;
long long int var_16 = -3808853344876903768LL;
unsigned short var_17 = (unsigned short)33942;
unsigned int var_18 = 4202884339U;
int zero = 0;
unsigned long long int var_20 = 15025232202241060571ULL;
unsigned short var_21 = (unsigned short)13821;
int var_22 = -813662201;
int var_23 = -4806593;
signed char var_24 = (signed char)-103;
unsigned char var_25 = (unsigned char)212;
unsigned long long int var_26 = 15008979785648571165ULL;
int var_27 = 1531395244;
unsigned int var_28 = 3774362929U;
unsigned int var_29 = 1936136048U;
unsigned int var_30 = 2768892811U;
_Bool var_31 = (_Bool)0;
unsigned char var_32 = (unsigned char)123;
unsigned short var_33 = (unsigned short)42531;
unsigned char var_34 = (unsigned char)194;
long long int var_35 = 4169577757827901434LL;
unsigned short var_36 = (unsigned short)8027;
unsigned char var_37 = (unsigned char)190;
unsigned long long int var_38 = 505311396552887244ULL;
signed char var_39 = (signed char)-91;
short var_40 = (short)25168;
_Bool arr_0 [15] ;
_Bool arr_1 [15] ;
unsigned char arr_3 [15] [15] [15] ;
short arr_4 [15] ;
int arr_5 [15] [15] [15] ;
unsigned int arr_6 [15] [15] [15] ;
_Bool arr_10 [15] [15] [15] [15] ;
signed char arr_11 [19] [19] ;
long long int arr_12 [19] ;
unsigned short arr_13 [19] ;
int arr_14 [19] ;
unsigned int arr_15 [19] [19] ;
unsigned int arr_16 [19] [19] ;
unsigned short arr_18 [19] [19] [19] ;
long long int arr_19 [19] [19] ;
unsigned char arr_20 [19] ;
_Bool arr_21 [19] ;
long long int arr_22 [19] [19] ;
signed char arr_23 [19] ;
unsigned short arr_25 [19] ;
long long int arr_26 [21] ;
int arr_27 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)15839 : (short)32208;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 171223643;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 55321000U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = -4689982442435383669LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (unsigned short)57035;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = -474429454;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = 3690378976U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = 2527805647U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)64848;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_19 [i_0] [i_1] = 7595204166840679165LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_21 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_22 [i_0] [i_1] = 1448472850220418924LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_25 [i_0] = (unsigned short)9852;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_26 [i_0] = -1093836483928144745LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 233853488 : -1035631241;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
