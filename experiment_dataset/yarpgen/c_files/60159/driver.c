#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -288682837;
short var_1 = (short)27464;
int var_2 = 536339290;
long long int var_3 = -7612656438366840905LL;
int var_4 = -823886112;
unsigned long long int var_5 = 17444794211577040326ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)144;
unsigned long long int var_8 = 17302510934482395159ULL;
signed char var_9 = (signed char)32;
short var_10 = (short)25837;
int zero = 0;
unsigned long long int var_11 = 17032814781771249227ULL;
long long int var_12 = 6477178472202217007LL;
unsigned short var_13 = (unsigned short)19126;
unsigned int var_14 = 4027158157U;
short var_15 = (short)-13039;
signed char var_16 = (signed char)-92;
int var_17 = 834234969;
unsigned long long int var_18 = 8449100412720526ULL;
short var_19 = (short)2993;
short var_20 = (short)-25141;
short var_21 = (short)-10061;
short var_22 = (short)15027;
int var_23 = 1086556476;
long long int var_24 = -8039930427803181043LL;
unsigned long long int var_25 = 1164378959517996781ULL;
unsigned int var_26 = 38217664U;
signed char var_27 = (signed char)-109;
unsigned int var_28 = 3336117138U;
_Bool var_29 = (_Bool)1;
unsigned short var_30 = (unsigned short)45136;
unsigned short var_31 = (unsigned short)64601;
long long int var_32 = -710248663658052992LL;
unsigned long long int var_33 = 4609589674463838264ULL;
unsigned long long int var_34 = 10645595299430880137ULL;
unsigned short var_35 = (unsigned short)5857;
unsigned long long int arr_0 [24] ;
short arr_1 [24] ;
unsigned long long int arr_3 [16] ;
unsigned int arr_4 [16] ;
unsigned long long int arr_7 [16] ;
unsigned int arr_8 [16] ;
signed char arr_9 [16] [16] ;
short arr_11 [16] ;
short arr_12 [16] ;
int arr_16 [16] [16] [16] ;
_Bool arr_17 [16] [16] [16] ;
int arr_18 [16] [16] [16] [16] ;
long long int arr_20 [16] ;
unsigned short arr_23 [16] ;
_Bool arr_27 [16] [16] [16] [16] ;
signed char arr_30 [16] [16] [16] [16] ;
long long int arr_31 [16] [16] [16] ;
unsigned long long int arr_36 [16] [16] [16] [16] ;
unsigned short arr_38 [16] [16] [16] [16] ;
unsigned long long int arr_40 [16] [16] [16] [16] [16] [16] ;
unsigned long long int arr_2 [24] [24] ;
short arr_5 [16] ;
unsigned long long int arr_6 [16] ;
unsigned long long int arr_10 [16] ;
unsigned long long int arr_13 [16] [16] ;
unsigned long long int arr_14 [16] ;
unsigned int arr_21 [16] [16] ;
unsigned char arr_22 [16] [16] ;
long long int arr_29 [16] ;
unsigned long long int arr_35 [16] ;
unsigned long long int arr_41 [16] [16] [16] [16] [16] [16] ;
unsigned long long int arr_42 [16] [16] [16] [16] [16] ;
int arr_43 [16] [16] ;
unsigned int arr_44 [16] [16] [16] [16] ;
signed char arr_48 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 11588839674279865294ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)16271;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 639990764153733268ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 1472120344U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 199719067654726460ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 876961513U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (short)-17134;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (short)-14571;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 1260726515;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 523174524;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = 1376286304177169290LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (unsigned short)26353;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = 8792585518164296179LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = 2032894281068462586ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (unsigned short)62206;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4636843382820370712ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 3167445690235013724ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)-18110;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 97031224171493678ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 12284359414975556671ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = 1556716572509811423ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = 17741599788650768996ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 304940691U : 37708433U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)81 : (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? 9003333197354010133LL : -1351045625855610287LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? 7489192825378916566ULL : 8310037504777329239ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 16370757901503901261ULL : 10899071817874695184ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 5244555185203311446ULL : 17342718480620635725ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_43 [i_0] [i_1] = (i_1 % 2 == 0) ? 690009006 : -228979963;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 736806295U : 1734060198U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_48 [i_0] = (signed char)-94;
}

void checksum() {
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_43 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_44 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_48 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
