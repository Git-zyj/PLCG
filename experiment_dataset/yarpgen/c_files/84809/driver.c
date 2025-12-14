#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10207139207799908741ULL;
short var_1 = (short)-16461;
unsigned char var_2 = (unsigned char)42;
signed char var_4 = (signed char)-28;
unsigned int var_7 = 3014793725U;
unsigned int var_9 = 1027870140U;
int zero = 0;
unsigned short var_12 = (unsigned short)20830;
unsigned char var_13 = (unsigned char)227;
int var_14 = -1228496788;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-2513;
int var_17 = -2024325156;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 14777027093025528049ULL;
short var_20 = (short)4563;
unsigned short var_21 = (unsigned short)17850;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 3059517543U;
unsigned long long int var_24 = 16787922306945657354ULL;
unsigned int var_25 = 468717134U;
int var_26 = 31060638;
short var_27 = (short)-28459;
unsigned int var_28 = 1535052828U;
unsigned long long int var_29 = 5474654793494829134ULL;
unsigned short var_30 = (unsigned short)23194;
long long int var_31 = -4355566063020574758LL;
_Bool var_32 = (_Bool)1;
unsigned int var_33 = 1546057396U;
short var_34 = (short)-7772;
unsigned int var_35 = 935858103U;
signed char arr_3 [19] ;
short arr_4 [19] [19] ;
short arr_6 [19] ;
unsigned int arr_8 [19] [19] ;
long long int arr_10 [19] [19] ;
int arr_12 [19] [19] [19] [19] ;
_Bool arr_15 [19] [19] [19] ;
int arr_17 [19] [19] [19] [19] [19] ;
int arr_25 [19] [19] [19] [19] [19] [19] [19] ;
short arr_26 [24] ;
signed char arr_27 [24] ;
unsigned int arr_28 [24] ;
long long int arr_29 [24] ;
short arr_30 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)65 : (signed char)-93;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (short)10306;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-4342 : (short)-30765;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 1376896780U : 2460441687U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 3463831496136762338LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -1796989298 : 194063977;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = -412518136;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? 1415088264 : 612796923;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = (short)-17272;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_27 [i_0] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 746859713U : 3392787423U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = -4675525106001043569LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (short)-17916;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
