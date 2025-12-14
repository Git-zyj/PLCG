#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
int var_2 = 2119871717;
signed char var_3 = (signed char)-41;
unsigned int var_4 = 750422539U;
_Bool var_6 = (_Bool)0;
long long int var_7 = -7472342025018317918LL;
unsigned int var_8 = 1510365805U;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 2648966565U;
long long int var_12 = -4488620293291227251LL;
signed char var_13 = (signed char)46;
signed char var_14 = (signed char)-80;
signed char var_16 = (signed char)-86;
signed char var_17 = (signed char)89;
int zero = 0;
long long int var_18 = 5946180642682767697LL;
unsigned int var_19 = 1035967625U;
long long int var_20 = -7777849780924358649LL;
signed char var_21 = (signed char)15;
unsigned short var_22 = (unsigned short)52552;
unsigned short var_23 = (unsigned short)27000;
unsigned int var_24 = 478244241U;
long long int var_25 = 1493844619973078315LL;
signed char var_26 = (signed char)112;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)69;
int var_29 = 143370375;
signed char var_30 = (signed char)-93;
_Bool var_31 = (_Bool)0;
long long int var_32 = -2879324295888336282LL;
long long int var_33 = 1860472272054414659LL;
_Bool var_34 = (_Bool)1;
unsigned short var_35 = (unsigned short)4024;
short var_36 = (short)27867;
unsigned short var_37 = (unsigned short)46805;
long long int var_38 = -1373930301522819391LL;
_Bool var_39 = (_Bool)1;
short var_40 = (short)-3329;
short var_41 = (short)5965;
unsigned char var_42 = (unsigned char)7;
short var_43 = (short)1141;
int var_44 = -1972934529;
long long int var_45 = 7383278604046002546LL;
short var_46 = (short)-1254;
unsigned long long int var_47 = 10461720741099054403ULL;
long long int var_48 = -6872315958627944690LL;
unsigned short var_49 = (unsigned short)16253;
signed char var_50 = (signed char)-14;
signed char var_51 = (signed char)-126;
_Bool var_52 = (_Bool)0;
_Bool var_53 = (_Bool)0;
_Bool var_54 = (_Bool)1;
signed char var_55 = (signed char)-67;
long long int var_56 = 4155499183207749756LL;
_Bool var_57 = (_Bool)0;
_Bool var_58 = (_Bool)0;
_Bool var_59 = (_Bool)1;
signed char var_60 = (signed char)-14;
short var_61 = (short)-22332;
_Bool var_62 = (_Bool)1;
signed char var_63 = (signed char)-46;
unsigned char var_64 = (unsigned char)17;
long long int var_65 = -1025512815873618829LL;
signed char var_66 = (signed char)-39;
signed char arr_0 [22] ;
unsigned char arr_1 [22] ;
int arr_2 [22] ;
long long int arr_3 [22] [22] [22] ;
signed char arr_5 [22] ;
_Bool arr_6 [22] [22] [22] ;
unsigned char arr_11 [22] [22] [22] [22] ;
signed char arr_13 [22] [22] [22] [22] [22] [22] [22] ;
unsigned int arr_16 [22] [22] [22] ;
_Bool arr_20 [22] [22] [22] [22] [22] [22] ;
int arr_21 [22] [22] [22] [22] [22] ;
long long int arr_23 [22] [22] [22] [22] [22] ;
int arr_24 [22] ;
signed char arr_26 [22] [22] [22] [22] [22] [22] [22] ;
signed char arr_27 [22] ;
long long int arr_29 [22] ;
unsigned short arr_30 [24] [24] ;
signed char arr_31 [24] ;
long long int arr_32 [24] ;
int arr_34 [24] ;
_Bool arr_35 [24] [24] [24] ;
signed char arr_40 [24] [24] [24] [24] ;
unsigned short arr_42 [24] [24] [24] ;
unsigned char arr_43 [24] [24] ;
unsigned short arr_50 [24] [24] [24] [24] [24] [24] ;
unsigned char arr_55 [24] [24] [24] [24] ;
_Bool arr_59 [24] [24] [24] [24] [24] ;
unsigned short arr_60 [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)65 : (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -767735725;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -6731719540579631142LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 2660484169U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = 1452351890;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -2576095006875518931LL : -8319911402701264325LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = -1623669498;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (signed char)-123 : (signed char)43;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_29 [i_0] = -9029444054563243641LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned short)57593;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_31 [i_0] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_32 [i_0] = 458607564563278734LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_34 [i_0] = 411480407;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (unsigned short)52519;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_43 [i_0] [i_1] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)52808;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_55 [i_0] [i_1] [i_2] [i_3] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)1393;
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
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
