#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24205;
short var_1 = (short)10307;
unsigned short var_2 = (unsigned short)28028;
unsigned short var_3 = (unsigned short)16608;
signed char var_4 = (signed char)-67;
unsigned long long int var_5 = 4260336505294892972ULL;
unsigned short var_6 = (unsigned short)60151;
short var_7 = (short)19882;
long long int var_8 = -6834194229740063558LL;
unsigned short var_10 = (unsigned short)65416;
unsigned long long int var_11 = 7998485688887247894ULL;
unsigned short var_12 = (unsigned short)17698;
unsigned char var_13 = (unsigned char)119;
unsigned short var_14 = (unsigned short)12597;
short var_15 = (short)-26931;
int zero = 0;
signed char var_16 = (signed char)-94;
unsigned char var_17 = (unsigned char)136;
unsigned short var_18 = (unsigned short)30881;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)13164;
long long int var_21 = 1459535060247885817LL;
unsigned short var_22 = (unsigned short)22398;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-22699;
unsigned long long int var_25 = 16180170254771184592ULL;
short var_26 = (short)-13295;
short var_27 = (short)8981;
unsigned long long int var_28 = 1004172187356656427ULL;
unsigned int var_29 = 665142143U;
unsigned short var_30 = (unsigned short)3354;
long long int var_31 = -7468705323970920061LL;
unsigned short var_32 = (unsigned short)12874;
int var_33 = 235887278;
unsigned short var_34 = (unsigned short)9571;
_Bool var_35 = (_Bool)1;
long long int var_36 = 2305871605920160253LL;
unsigned char var_37 = (unsigned char)25;
_Bool var_38 = (_Bool)1;
unsigned char var_39 = (unsigned char)147;
unsigned int var_40 = 3817104859U;
unsigned short var_41 = (unsigned short)54786;
unsigned int var_42 = 1246970737U;
int var_43 = -1897543159;
unsigned long long int var_44 = 13403874041708883047ULL;
long long int var_45 = 7578526513644140342LL;
_Bool var_46 = (_Bool)1;
unsigned long long int var_47 = 11657501616112567340ULL;
_Bool var_48 = (_Bool)0;
long long int var_49 = 5018716101026907616LL;
short var_50 = (short)-28173;
unsigned int var_51 = 1940087500U;
unsigned long long int var_52 = 12828261301872713757ULL;
unsigned long long int arr_1 [10] ;
signed char arr_2 [10] ;
signed char arr_4 [10] [10] ;
int arr_6 [10] [10] [10] ;
unsigned long long int arr_8 [10] [10] [10] [10] ;
unsigned long long int arr_10 [10] [10] [10] [10] ;
unsigned int arr_13 [10] [10] [10] ;
long long int arr_14 [10] ;
_Bool arr_15 [10] ;
_Bool arr_17 [10] [10] [10] ;
_Bool arr_30 [10] [10] [10] [10] [10] ;
int arr_35 [16] [16] ;
short arr_37 [16] ;
unsigned long long int arr_38 [16] [16] [16] ;
unsigned long long int arr_40 [16] [16] [16] ;
short arr_44 [16] [16] ;
unsigned long long int arr_47 [16] ;
unsigned long long int arr_48 [16] ;
unsigned long long int arr_49 [16] [16] [16] ;
unsigned long long int arr_51 [16] [16] [16] [16] ;
long long int arr_54 [16] [16] [16] [16] [16] [16] [16] ;
unsigned short arr_55 [16] ;
int arr_59 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 2131883926385758722ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)15 : (signed char)43;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1710514389;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 7937202165541608306ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 8322610321006106232ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 1272018112U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = -7572421566972944972LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_35 [i_0] [i_1] = 1704499241;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_37 [i_0] = (short)17877;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = 4792500083803555233ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 9474997364470572542ULL : 9221447087876537697ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_44 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-22190 : (short)-24248;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_47 [i_0] = 6427660815891091395ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_48 [i_0] = 17804756241951148110ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = 1284430555898388087ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = 15366573181084538314ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? 3866893975115045752LL : 3479902878721529819LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_55 [i_0] = (i_0 % 2 == 0) ? (unsigned short)2800 : (unsigned short)57152;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_59 [i_0] [i_1] = 58615644;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
