#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10938;
short var_1 = (short)2540;
unsigned long long int var_2 = 15816727215687830924ULL;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-7979;
short var_5 = (short)20965;
short var_6 = (short)-14448;
long long int var_7 = 107773665744201610LL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-13427;
unsigned long long int var_10 = 10458468702635972218ULL;
short var_11 = (short)2011;
unsigned int var_12 = 387539503U;
unsigned char var_13 = (unsigned char)124;
int zero = 0;
unsigned int var_14 = 1084586454U;
unsigned char var_15 = (unsigned char)254;
short var_16 = (short)4329;
int var_17 = 805412803;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1020631211U;
long long int var_20 = 3692755706449613431LL;
unsigned int var_21 = 1896832898U;
short var_22 = (short)-2091;
short var_23 = (short)24757;
short var_24 = (short)1338;
unsigned int var_25 = 2835891469U;
short var_26 = (short)30671;
unsigned int var_27 = 33477052U;
short var_28 = (short)21647;
long long int var_29 = 8704045446185000506LL;
unsigned long long int var_30 = 15054145019508719296ULL;
unsigned int var_31 = 3216974895U;
unsigned short var_32 = (unsigned short)43004;
_Bool var_33 = (_Bool)0;
_Bool var_34 = (_Bool)1;
unsigned int var_35 = 3323131201U;
_Bool var_36 = (_Bool)1;
unsigned int var_37 = 3177793563U;
unsigned int var_38 = 50186958U;
unsigned long long int var_39 = 15328972476272522762ULL;
short var_40 = (short)8980;
unsigned int var_41 = 1207889803U;
_Bool var_42 = (_Bool)1;
unsigned int var_43 = 3105833843U;
signed char var_44 = (signed char)-17;
short var_45 = (short)-12080;
short var_46 = (short)-32361;
short var_47 = (short)-4131;
unsigned char var_48 = (unsigned char)160;
int var_49 = -538902212;
short var_50 = (short)11451;
short var_51 = (short)-29067;
unsigned int var_52 = 774450758U;
short var_53 = (short)18519;
short var_54 = (short)15821;
short var_55 = (short)23344;
unsigned int var_56 = 2841184187U;
signed char var_57 = (signed char)27;
unsigned int var_58 = 1981795923U;
short var_59 = (short)5075;
_Bool var_60 = (_Bool)0;
unsigned long long int var_61 = 8417713528788931466ULL;
short var_62 = (short)-10809;
short var_63 = (short)-28087;
unsigned int var_64 = 2955328412U;
unsigned short var_65 = (unsigned short)15838;
short arr_4 [16] ;
int arr_5 [16] [16] [16] ;
short arr_8 [16] [16] [16] ;
unsigned long long int arr_15 [16] [16] [16] [16] [16] ;
unsigned char arr_34 [25] ;
short arr_35 [25] ;
short arr_36 [25] [25] ;
int arr_39 [25] ;
_Bool arr_40 [25] [25] [25] ;
_Bool arr_41 [25] [25] [25] ;
unsigned long long int arr_42 [25] ;
short arr_44 [25] [25] [25] ;
unsigned char arr_45 [25] [25] ;
int arr_46 [25] [25] [25] [25] ;
_Bool arr_48 [25] [25] [25] [25] ;
unsigned short arr_52 [25] [25] [25] ;
int arr_53 [25] [25] ;
_Bool arr_54 [25] [25] ;
_Bool arr_56 [25] [25] [25] ;
_Bool arr_57 [25] ;
short arr_59 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)14554;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1074594379;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)30167;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 15846619229578665657ULL : 15585587134689409315ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_34 [i_0] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_35 [i_0] = (short)23996;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_36 [i_0] [i_1] = (short)-16491;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_39 [i_0] = -478375902;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_42 [i_0] = 7712324860785421216ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (short)22207;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_45 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)86 : (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = 1401909438;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = (unsigned short)44687;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_53 [i_0] [i_1] = -1118764714;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_54 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_56 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_57 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_59 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)16534 : (short)-23664;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
