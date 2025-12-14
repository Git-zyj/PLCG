#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 587456185662384260ULL;
unsigned long long int var_3 = 7227411688063580226ULL;
unsigned long long int var_4 = 11340967256383362715ULL;
unsigned long long int var_5 = 15948872380622356541ULL;
short var_6 = (short)14850;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 8723755652569978471ULL;
int zero = 0;
signed char var_10 = (signed char)-119;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 283362706U;
long long int var_13 = 494661437279367817LL;
short var_14 = (short)-30258;
_Bool var_15 = (_Bool)0;
short var_16 = (short)17506;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 14368474975729119872ULL;
long long int var_19 = -7597611160622582017LL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)13;
unsigned char var_22 = (unsigned char)72;
signed char var_23 = (signed char)-45;
short var_24 = (short)-28826;
unsigned char var_25 = (unsigned char)119;
long long int var_26 = -4553840466361088217LL;
signed char var_27 = (signed char)-46;
unsigned char var_28 = (unsigned char)202;
_Bool var_29 = (_Bool)1;
unsigned long long int var_30 = 10847910441432941309ULL;
unsigned short var_31 = (unsigned short)32774;
_Bool var_32 = (_Bool)0;
long long int var_33 = 1669020556563425426LL;
unsigned long long int var_34 = 16465567174574471973ULL;
unsigned long long int var_35 = 12620370562162827504ULL;
unsigned long long int var_36 = 10770816448808394847ULL;
signed char arr_0 [16] ;
signed char arr_2 [16] [16] ;
unsigned int arr_3 [16] [16] [16] ;
unsigned long long int arr_4 [14] ;
signed char arr_6 [14] [14] [14] ;
unsigned long long int arr_7 [14] [14] ;
short arr_14 [14] [14] [14] ;
unsigned int arr_17 [14] [14] [14] [14] ;
unsigned short arr_22 [14] [14] ;
unsigned long long int arr_34 [20] ;
_Bool arr_13 [14] [14] ;
short arr_21 [14] [14] [14] ;
unsigned long long int arr_25 [14] ;
signed char arr_32 [14] [14] [14] [14] [14] [14] ;
unsigned short arr_33 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1906235748U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 6956045793090178277ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 4839400514718127560ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)8148 : (short)-15933;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 68840539U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned short)45226;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_34 [i_0] = 6233745011917984137ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)23192 : (short)8856;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = 10701275121154034112ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_33 [i_0] [i_1] = (unsigned short)51817;
}

void checksum() {
    hash(&seed, var_10);
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
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
