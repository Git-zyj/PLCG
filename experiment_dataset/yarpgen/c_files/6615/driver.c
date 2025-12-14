#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)142;
unsigned int var_12 = 160264867U;
unsigned long long int var_14 = 5069674006742661937ULL;
int zero = 0;
signed char var_15 = (signed char)-58;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)25;
unsigned int var_18 = 2852708411U;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 10322478594710739692ULL;
_Bool var_22 = (_Bool)0;
long long int var_23 = -2997169309841932492LL;
unsigned short var_24 = (unsigned short)17099;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)17096;
int var_27 = -1942654108;
unsigned long long int var_28 = 13283908356188841474ULL;
unsigned int var_29 = 998452602U;
unsigned long long int var_30 = 3990506586884481063ULL;
unsigned long long int var_31 = 1480096651625931578ULL;
signed char var_32 = (signed char)98;
long long int var_33 = -6108604402938797540LL;
long long int var_34 = -1674175616511889128LL;
unsigned char var_35 = (unsigned char)152;
_Bool var_36 = (_Bool)1;
long long int var_37 = 1530358927158251135LL;
unsigned long long int var_38 = 14631381374464896742ULL;
unsigned char arr_1 [17] ;
unsigned char arr_4 [17] [17] [17] ;
unsigned long long int arr_5 [17] ;
long long int arr_8 [17] ;
signed char arr_9 [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_10 [13] ;
int arr_11 [13] [13] ;
unsigned short arr_18 [22] [22] ;
_Bool arr_19 [22] ;
long long int arr_24 [22] [22] [22] [22] ;
unsigned int arr_25 [22] [22] ;
short arr_26 [24] ;
unsigned char arr_29 [24] [24] ;
unsigned char arr_30 [24] [24] [24] ;
unsigned long long int arr_31 [24] [24] ;
signed char arr_42 [19] ;
unsigned short arr_14 [13] ;
short arr_17 [14] [14] ;
unsigned long long int arr_32 [24] [24] [24] ;
unsigned int arr_33 [24] [24] [24] ;
int arr_34 [24] ;
long long int arr_35 [24] ;
long long int arr_39 [14] ;
unsigned char arr_46 [19] [19] [19] ;
unsigned long long int arr_47 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 10581321146817594699ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -4596031124799135852LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = 17356416742275544824ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = 1216750820;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)20877;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 6116005785845953643LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_25 [i_0] [i_1] = 231084980U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = (short)-29201;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_31 [i_0] [i_1] = 5218339419708769652ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_42 [i_0] = (signed char)2;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (unsigned short)1995;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_17 [i_0] [i_1] = (short)-25929;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = 3159770147779391793ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 3697022437U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_34 [i_0] = 1594356880;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_35 [i_0] = 465347203448605850LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_39 [i_0] = -7746897856405115564LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_47 [i_0] [i_1] = 6362050656628257091ULL;
}

void checksum() {
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_46 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
