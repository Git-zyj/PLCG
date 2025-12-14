#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -187022590;
unsigned long long int var_1 = 11892154399259755898ULL;
unsigned long long int var_2 = 16675906752946973135ULL;
short var_3 = (short)-10351;
signed char var_5 = (signed char)123;
unsigned long long int var_6 = 17220727288556068026ULL;
unsigned short var_7 = (unsigned short)42466;
signed char var_8 = (signed char)-127;
unsigned long long int var_9 = 13249414275208127004ULL;
unsigned short var_10 = (unsigned short)60074;
unsigned int var_11 = 1417400179U;
unsigned short var_13 = (unsigned short)27554;
int var_14 = -447674837;
unsigned long long int var_16 = 3224547271142891274ULL;
int zero = 0;
long long int var_17 = -5674486207384171766LL;
unsigned long long int var_18 = 6579170004582439584ULL;
unsigned char var_19 = (unsigned char)101;
unsigned int var_20 = 1247346355U;
unsigned long long int var_21 = 9391399017969714591ULL;
short var_22 = (short)-4547;
short var_23 = (short)-22797;
signed char var_24 = (signed char)-103;
unsigned short var_25 = (unsigned short)52246;
short var_26 = (short)32271;
short var_27 = (short)-23850;
unsigned int var_28 = 2876512782U;
unsigned short var_29 = (unsigned short)37974;
short var_30 = (short)18166;
short var_31 = (short)-12024;
short var_32 = (short)-7203;
int var_33 = -1285962147;
unsigned int var_34 = 2894999696U;
int var_35 = 411135403;
short arr_0 [20] ;
long long int arr_2 [20] ;
_Bool arr_3 [20] ;
_Bool arr_5 [20] [20] ;
unsigned short arr_7 [20] [20] [20] ;
_Bool arr_10 [20] [20] [20] ;
short arr_11 [20] ;
unsigned long long int arr_13 [20] [20] ;
unsigned long long int arr_19 [12] ;
unsigned int arr_20 [12] ;
unsigned short arr_39 [16] ;
unsigned long long int arr_46 [25] [25] ;
unsigned int arr_49 [25] ;
unsigned int arr_50 [25] [25] ;
long long int arr_53 [25] [25] [25] ;
signed char arr_58 [25] [25] [25] [25] [25] [25] [25] ;
long long int arr_59 [25] [25] [25] [25] [25] [25] [25] ;
unsigned short arr_61 [23] ;
unsigned char arr_66 [23] ;
unsigned long long int arr_4 [20] ;
signed char arr_9 [20] ;
long long int arr_14 [20] [20] ;
unsigned int arr_17 [10] ;
unsigned int arr_22 [12] ;
unsigned short arr_33 [12] [12] [12] [12] [12] [12] ;
unsigned int arr_34 [12] ;
unsigned char arr_37 [18] ;
unsigned int arr_38 [18] ;
unsigned short arr_45 [16] ;
long long int arr_54 [25] ;
_Bool arr_63 [23] ;
unsigned char arr_73 [23] [23] [23] [23] [23] ;
long long int arr_74 [23] ;
unsigned short arr_75 [23] ;
short arr_76 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)-17774;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 1102490017857177980LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)7241;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)14477 : (short)17122;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 9512128292719557524ULL : 10869115056776425426ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = 17616694768000900750ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = 3806590929U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_39 [i_0] = (unsigned short)59397;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_46 [i_0] [i_1] = 5110221761044871330ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_49 [i_0] = 3007564354U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_50 [i_0] [i_1] = 208327164U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = 5950040970549628176LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_58 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? (signed char)96 : (signed char)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -6245878259838844833LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_61 [i_0] = (unsigned short)13156;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_66 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 17392416530725262115ULL : 6179635864981633200ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)-35 : (signed char)-26;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? -3994811074901507360LL : -7623636311236237937LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = 2661407972U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = 3627457676U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (unsigned short)63318 : (unsigned short)64947;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? 2424870723U : 2851425317U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? (unsigned char)4 : (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? 1626399083U : 2596539107U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? (unsigned short)53742 : (unsigned short)38961;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_54 [i_0] = (i_0 % 2 == 0) ? 50328265017139176LL : -6640432858953007206LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_63 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_73 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned char)20 : (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_74 [i_0] = (i_0 % 2 == 0) ? 953144608052195031LL : -6631498949380067535LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_75 [i_0] = (i_0 % 2 == 0) ? (unsigned short)65232 : (unsigned short)56830;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_76 [i_0] = (i_0 % 2 == 0) ? (short)8955 : (short)-30629;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_54 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_63 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_73 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_74 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_75 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_76 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
