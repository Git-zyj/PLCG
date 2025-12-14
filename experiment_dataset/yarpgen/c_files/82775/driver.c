#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1047233160;
unsigned char var_1 = (unsigned char)97;
signed char var_2 = (signed char)-79;
unsigned int var_3 = 2223254808U;
unsigned char var_4 = (unsigned char)85;
unsigned int var_5 = 3109084710U;
unsigned char var_6 = (unsigned char)100;
unsigned char var_7 = (unsigned char)249;
unsigned int var_8 = 1725980945U;
long long int var_9 = 3988096486508107914LL;
unsigned char var_10 = (unsigned char)58;
short var_11 = (short)-30014;
unsigned int var_12 = 287874022U;
int var_13 = 1715278744;
int var_14 = -1082594372;
int var_15 = -245258487;
short var_16 = (short)17460;
int zero = 0;
int var_17 = 291785285;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)224;
unsigned long long int var_20 = 16147499235761126667ULL;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)149;
unsigned short var_23 = (unsigned short)45798;
signed char var_24 = (signed char)74;
long long int var_25 = -5715267193032769241LL;
signed char var_26 = (signed char)65;
int var_27 = 1165720010;
unsigned char var_28 = (unsigned char)126;
unsigned char var_29 = (unsigned char)104;
unsigned char var_30 = (unsigned char)196;
unsigned short var_31 = (unsigned short)62823;
unsigned short var_32 = (unsigned short)48518;
unsigned int var_33 = 3281343002U;
unsigned long long int var_34 = 2417811959287272751ULL;
long long int var_35 = -2082799021639996822LL;
unsigned char arr_0 [23] ;
unsigned short arr_1 [23] [23] ;
unsigned char arr_4 [12] ;
short arr_5 [12] ;
int arr_6 [12] ;
long long int arr_8 [25] ;
unsigned long long int arr_9 [25] ;
int arr_11 [25] ;
signed char arr_13 [25] [25] [25] ;
long long int arr_14 [23] ;
unsigned int arr_2 [23] [23] ;
unsigned short arr_3 [23] [23] ;
unsigned char arr_17 [23] [23] ;
unsigned short arr_21 [23] [23] ;
unsigned long long int arr_29 [23] [23] [23] [23] [23] ;
unsigned int arr_30 [23] [23] [23] [23] [23] [23] ;
unsigned char arr_36 [15] ;
unsigned short arr_37 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)3139;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (short)-18654;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -1843845922;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 7189121577682929100LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 7265364885529726885ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 290771455;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = -6293782473169322554LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 1682533238U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)13822;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)34244;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 8038761928976566352ULL : 14608551326136411159ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 2498010769U : 1487755878U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_36 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_37 [i_0] = (unsigned short)19091;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
