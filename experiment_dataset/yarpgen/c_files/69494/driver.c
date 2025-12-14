#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23570;
short var_1 = (short)7330;
short var_2 = (short)4580;
unsigned int var_3 = 3105519616U;
unsigned short var_4 = (unsigned short)14908;
unsigned char var_5 = (unsigned char)134;
unsigned short var_6 = (unsigned short)36669;
long long int var_7 = -190976638451175801LL;
unsigned char var_8 = (unsigned char)66;
long long int var_9 = -6091418060377843710LL;
unsigned int var_11 = 1396426441U;
int zero = 0;
unsigned char var_12 = (unsigned char)78;
unsigned long long int var_13 = 11392245243992930153ULL;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)6176;
long long int var_16 = -6068769172023618658LL;
int var_17 = -195767320;
short var_18 = (short)-26704;
unsigned short var_19 = (unsigned short)36436;
short var_20 = (short)19049;
int var_21 = 464004583;
int var_22 = -308861933;
unsigned int var_23 = 1325241840U;
long long int var_24 = -6048571286332901913LL;
unsigned short var_25 = (unsigned short)19007;
_Bool var_26 = (_Bool)1;
short var_27 = (short)9806;
signed char var_28 = (signed char)-85;
unsigned char var_29 = (unsigned char)7;
unsigned char var_30 = (unsigned char)115;
unsigned long long int var_31 = 16144106853430890607ULL;
unsigned char var_32 = (unsigned char)192;
int var_33 = 100416159;
unsigned long long int var_34 = 18068944850862741913ULL;
signed char var_35 = (signed char)-83;
_Bool var_36 = (_Bool)0;
long long int var_37 = -1141862787287531488LL;
signed char var_38 = (signed char)15;
unsigned int var_39 = 2796170507U;
unsigned short var_40 = (unsigned short)14152;
unsigned char var_41 = (unsigned char)174;
_Bool var_42 = (_Bool)0;
int var_43 = -2105878104;
short var_44 = (short)-28993;
unsigned long long int arr_0 [17] ;
short arr_1 [17] [17] ;
unsigned char arr_2 [17] [17] ;
int arr_3 [17] [17] [17] ;
short arr_4 [17] ;
signed char arr_6 [17] [17] ;
unsigned long long int arr_7 [17] [17] [17] [17] ;
unsigned long long int arr_8 [17] [17] [17] ;
unsigned int arr_10 [17] ;
long long int arr_12 [17] [17] [17] [17] ;
unsigned long long int arr_15 [17] [17] [17] [17] ;
short arr_17 [17] [17] [17] [17] [17] ;
signed char arr_36 [11] [11] [11] [11] ;
long long int arr_48 [19] ;
short arr_50 [19] ;
unsigned long long int arr_51 [19] ;
unsigned char arr_53 [21] ;
short arr_55 [21] ;
short arr_21 [11] ;
short arr_40 [11] [11] [11] [11] ;
unsigned int arr_47 [11] [11] [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1675539799084827779ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-23074;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -632189041;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)24650 : (short)-29452;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-83 : (signed char)-23;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 95529524847375556ULL : 7062285293702833481ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 15060696791470969849ULL : 10741978360364459538ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 4097752507U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 124237422566613626LL : 575410835041606427LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 10986693556389166485ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-23046;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_48 [i_0] = -1659318270984387873LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_50 [i_0] = (short)18589;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_51 [i_0] = 4639228828975684461ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_53 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_55 [i_0] = (short)8690;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = (short)30414;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (short)2239;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 3896965075U;
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                hash(&seed, arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
