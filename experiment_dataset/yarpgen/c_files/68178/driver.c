#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3745124607U;
short var_1 = (short)25810;
unsigned int var_2 = 1765428711U;
unsigned char var_3 = (unsigned char)96;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 603351018U;
short var_7 = (short)-17996;
short var_9 = (short)-29304;
unsigned int var_10 = 976110748U;
unsigned int var_11 = 1376902896U;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 2899966696U;
unsigned char var_14 = (unsigned char)32;
int var_15 = -108800854;
short var_16 = (short)-3535;
unsigned long long int var_17 = 6300483644044152338ULL;
short var_18 = (short)-9905;
unsigned int var_19 = 1762302882U;
_Bool var_20 = (_Bool)1;
short var_21 = (short)11402;
unsigned char var_22 = (unsigned char)184;
unsigned long long int var_23 = 742738879714201099ULL;
long long int var_24 = 4888203184574752081LL;
unsigned int var_25 = 1335361384U;
_Bool var_26 = (_Bool)0;
_Bool var_27 = (_Bool)0;
short var_28 = (short)-3029;
short var_29 = (short)10564;
_Bool var_30 = (_Bool)1;
unsigned long long int var_31 = 264919729454522692ULL;
unsigned long long int var_32 = 13645409081746216711ULL;
unsigned int var_33 = 2576877647U;
unsigned int var_34 = 2663226108U;
short var_35 = (short)-11222;
int arr_0 [15] ;
unsigned int arr_4 [15] [15] [15] ;
unsigned long long int arr_5 [15] ;
_Bool arr_6 [15] [15] ;
long long int arr_7 [15] [15] ;
unsigned int arr_12 [15] [15] [15] ;
_Bool arr_13 [15] [15] [15] ;
short arr_23 [15] [15] [15] [15] ;
short arr_27 [15] [15] [15] ;
unsigned int arr_31 [24] ;
unsigned int arr_32 [24] ;
unsigned int arr_33 [24] [24] ;
_Bool arr_34 [24] [24] ;
unsigned long long int arr_28 [15] [15] [15] [15] ;
short arr_29 [15] ;
unsigned int arr_30 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1754726855;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2208032741U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 11621302612529455914ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = 5610927831545266248LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 3056097470U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (short)29835;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (short)-5269;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_31 [i_0] = 2525480441U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_32 [i_0] = 2275107744U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_33 [i_0] [i_1] = 2128002837U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_34 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 7677179801630128701ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_29 [i_0] = (short)20677;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_30 [i_0] = 1760537475U;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
