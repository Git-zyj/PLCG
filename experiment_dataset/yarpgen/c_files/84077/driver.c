#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -562193516750983794LL;
unsigned short var_2 = (unsigned short)50764;
unsigned long long int var_3 = 12507899980146023223ULL;
unsigned short var_4 = (unsigned short)37945;
unsigned long long int var_5 = 16147560785495175325ULL;
unsigned int var_7 = 4284154933U;
signed char var_8 = (signed char)79;
unsigned short var_9 = (unsigned short)19182;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)54991;
long long int var_13 = 786967584317301779LL;
unsigned char var_14 = (unsigned char)6;
int zero = 0;
long long int var_16 = -1542292158592069389LL;
long long int var_17 = 2538454624040780510LL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)62;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)109;
long long int var_23 = 3863576280874287244LL;
signed char var_24 = (signed char)-26;
signed char var_25 = (signed char)51;
unsigned short var_26 = (unsigned short)8396;
int var_27 = -622701010;
unsigned long long int var_28 = 11785876287330991505ULL;
unsigned int var_29 = 2945764939U;
unsigned long long int var_30 = 17045248286008330106ULL;
long long int var_31 = 3418009394912737633LL;
unsigned short var_32 = (unsigned short)56390;
_Bool var_33 = (_Bool)1;
unsigned long long int var_34 = 15005552219514248488ULL;
int var_35 = -594804783;
signed char var_36 = (signed char)104;
long long int var_37 = -6994050646888011074LL;
long long int var_38 = -4975312585931340476LL;
long long int var_39 = -3576048995576815507LL;
long long int var_40 = 8873445308187299270LL;
unsigned int var_41 = 1144259147U;
unsigned int var_42 = 233727666U;
signed char arr_0 [19] ;
int arr_1 [19] ;
long long int arr_2 [19] ;
unsigned short arr_5 [19] [19] [19] ;
int arr_6 [19] [19] [19] ;
unsigned char arr_8 [19] [19] [19] [19] ;
unsigned short arr_9 [19] [19] [19] ;
unsigned long long int arr_10 [19] [19] [19] [19] ;
short arr_11 [19] ;
unsigned short arr_12 [19] [19] [19] ;
int arr_14 [19] [19] [19] ;
unsigned int arr_19 [19] [19] [19] [19] ;
unsigned int arr_29 [19] [19] ;
_Bool arr_30 [20] ;
int arr_31 [20] ;
long long int arr_24 [19] [19] [19] [19] [19] ;
long long int arr_32 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 636326761 : 249767682;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -7548497917282074699LL : -3476211886265090602LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)1769;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 987545782;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)94 : (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)37814 : (unsigned short)45289;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 17384625996745066791ULL : 421894937618832306ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (short)14969;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)62058;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 853539480;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 3621661051U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_29 [i_0] [i_1] = 575923666U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_30 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_31 [i_0] = -873988678;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -7621784112480686651LL : 8443121958406515939LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_32 [i_0] = 6330109321149626080LL;
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
    hash(&seed, var_41);
    hash(&seed, var_42);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
