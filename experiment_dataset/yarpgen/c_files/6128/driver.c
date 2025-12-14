#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1167405023838035041LL;
unsigned long long int var_1 = 11571621086548313229ULL;
short var_4 = (short)-13480;
signed char var_5 = (signed char)-37;
short var_7 = (short)-20509;
signed char var_8 = (signed char)34;
unsigned int var_9 = 1514358142U;
int var_10 = -1324244824;
unsigned char var_12 = (unsigned char)255;
short var_13 = (short)2238;
unsigned short var_15 = (unsigned short)37557;
short var_16 = (short)7170;
short var_17 = (short)-6868;
int zero = 0;
unsigned long long int var_18 = 13999270389940224921ULL;
short var_19 = (short)7189;
short var_20 = (short)14587;
int var_21 = 223664590;
unsigned char var_22 = (unsigned char)75;
unsigned long long int var_23 = 17817323957627251604ULL;
unsigned long long int var_24 = 2095013381669092135ULL;
int var_25 = 1149871194;
unsigned short var_26 = (unsigned short)7338;
unsigned long long int var_27 = 8130400883317745837ULL;
short var_28 = (short)-32144;
unsigned int var_29 = 1284039192U;
signed char var_30 = (signed char)-50;
unsigned char var_31 = (unsigned char)164;
int var_32 = -953946009;
unsigned long long int var_33 = 5220240135946379053ULL;
unsigned short var_34 = (unsigned short)30746;
short var_35 = (short)-3960;
unsigned short var_36 = (unsigned short)21396;
unsigned long long int var_37 = 18430764751224649403ULL;
unsigned long long int var_38 = 10211878414111988184ULL;
_Bool var_39 = (_Bool)0;
short var_40 = (short)4078;
_Bool var_41 = (_Bool)1;
unsigned long long int var_42 = 14634383676640639303ULL;
unsigned char var_43 = (unsigned char)171;
unsigned char var_44 = (unsigned char)37;
int arr_0 [24] ;
short arr_1 [24] ;
long long int arr_2 [24] [24] ;
short arr_3 [24] ;
int arr_4 [24] ;
signed char arr_6 [15] [15] ;
unsigned int arr_7 [15] ;
_Bool arr_9 [15] [15] ;
int arr_10 [15] [15] ;
int arr_13 [15] [15] [15] ;
_Bool arr_14 [15] [15] ;
_Bool arr_16 [15] [15] [15] [15] ;
int arr_18 [15] [15] [15] [15] [15] [15] ;
unsigned long long int arr_19 [15] [15] [15] [15] ;
unsigned int arr_20 [15] [15] [15] [15] ;
int arr_21 [15] [15] [15] [15] [15] [15] ;
unsigned int arr_23 [15] [15] [15] [15] [15] ;
_Bool arr_24 [15] [15] [15] [15] ;
unsigned char arr_26 [15] ;
unsigned int arr_32 [15] ;
short arr_8 [15] ;
unsigned long long int arr_29 [15] [15] [15] [15] [15] ;
unsigned long long int arr_33 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -783048307;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)902;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = -8741863884902611412LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)-26399;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 486444058;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 3884031856U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = -1283148761;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -2032281908;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1591368013;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 10831321445947996810ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 2318736994U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1501822361;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = 2642476841U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_26 [i_0] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_32 [i_0] = 613965464U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (short)-22911;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = 6154437094675650366ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_33 [i_0] = 6601630812105352704ULL;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
