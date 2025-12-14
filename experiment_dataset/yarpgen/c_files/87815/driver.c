#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)72;
long long int var_1 = 4146598566094362303LL;
short var_3 = (short)2991;
_Bool var_4 = (_Bool)1;
long long int var_5 = 7692686964176320215LL;
unsigned long long int var_6 = 17443134997051279672ULL;
signed char var_7 = (signed char)-91;
int var_8 = -1731493121;
unsigned long long int var_9 = 17575076032025184268ULL;
unsigned short var_10 = (unsigned short)18498;
unsigned long long int var_11 = 374622568151335377ULL;
int var_12 = 653899286;
int var_13 = 1107211084;
unsigned char var_14 = (unsigned char)37;
unsigned int var_15 = 2485362811U;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 855079185U;
unsigned char var_19 = (unsigned char)143;
short var_20 = (short)-3249;
unsigned long long int var_21 = 8874982572877837694ULL;
unsigned char var_22 = (unsigned char)153;
short var_23 = (short)-9912;
unsigned short var_24 = (unsigned short)29828;
short var_25 = (short)-2847;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 13331862077016911788ULL;
unsigned int var_28 = 2041687868U;
unsigned short var_29 = (unsigned short)2755;
unsigned short var_30 = (unsigned short)25220;
_Bool var_31 = (_Bool)0;
unsigned long long int var_32 = 1936533163663368425ULL;
unsigned int var_33 = 588683122U;
unsigned long long int var_34 = 11390017893531129998ULL;
_Bool var_35 = (_Bool)1;
signed char var_36 = (signed char)98;
unsigned long long int var_37 = 11234687047507379461ULL;
_Bool var_38 = (_Bool)1;
signed char var_39 = (signed char)-75;
int var_40 = -1125926298;
unsigned long long int var_41 = 3606716990743660197ULL;
unsigned char var_42 = (unsigned char)126;
unsigned long long int var_43 = 12797947577588169482ULL;
short var_44 = (short)-7885;
signed char var_45 = (signed char)-86;
unsigned long long int var_46 = 12057367573987324291ULL;
unsigned long long int var_47 = 8796586797805275783ULL;
signed char var_48 = (signed char)-89;
unsigned char var_49 = (unsigned char)50;
short arr_1 [10] [10] ;
unsigned long long int arr_3 [24] [24] ;
int arr_4 [24] [24] ;
signed char arr_6 [24] [24] ;
unsigned char arr_12 [24] [24] ;
_Bool arr_14 [24] [24] [24] [24] [24] ;
unsigned int arr_15 [24] ;
long long int arr_16 [24] ;
_Bool arr_17 [24] ;
int arr_21 [24] [24] [24] ;
unsigned int arr_26 [24] [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)28594 : (short)21750;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 15021601892469089242ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 568751560;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = 1185474216U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = -184152806137886323LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 1600639494;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1346779065U;
}

void checksum() {
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
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
