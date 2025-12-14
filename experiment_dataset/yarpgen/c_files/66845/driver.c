#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
unsigned short var_1 = (unsigned short)42838;
long long int var_2 = -1982811393371262288LL;
signed char var_3 = (signed char)-61;
long long int var_4 = 6282619625334307504LL;
short var_5 = (short)14165;
unsigned long long int var_6 = 16244347622237205985ULL;
long long int var_7 = 2773887455527700966LL;
unsigned short var_8 = (unsigned short)30788;
unsigned char var_9 = (unsigned char)172;
unsigned char var_10 = (unsigned char)16;
unsigned char var_11 = (unsigned char)188;
unsigned short var_12 = (unsigned short)62393;
long long int var_13 = -3253616845431982280LL;
long long int var_14 = -7439935755857303836LL;
int var_15 = 2042802135;
_Bool var_16 = (_Bool)0;
long long int var_17 = -2270678799909404258LL;
int zero = 0;
unsigned short var_18 = (unsigned short)2097;
int var_19 = 126589030;
unsigned char var_20 = (unsigned char)140;
unsigned short var_21 = (unsigned short)47007;
long long int var_22 = 5903636424436203421LL;
int var_23 = -103024999;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 17783530744927489098ULL;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 1728818192U;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)0;
long long int var_30 = 1064554780973948759LL;
_Bool var_31 = (_Bool)0;
int var_32 = 1865336560;
unsigned short var_33 = (unsigned short)34706;
unsigned short var_34 = (unsigned short)24818;
long long int var_35 = 8635105190967828646LL;
unsigned long long int var_36 = 11107424077925592490ULL;
unsigned char var_37 = (unsigned char)248;
int var_38 = -1238195603;
unsigned char var_39 = (unsigned char)95;
unsigned char arr_0 [13] ;
short arr_3 [13] [13] ;
long long int arr_4 [13] ;
unsigned int arr_5 [13] [13] ;
unsigned int arr_6 [13] [13] ;
unsigned char arr_7 [13] [13] [13] [13] [13] [13] ;
_Bool arr_8 [13] [13] [13] ;
unsigned char arr_9 [13] [13] [13] ;
_Bool arr_10 [13] [13] [13] [13] [13] [13] [13] ;
int arr_11 [13] [13] [13] ;
long long int arr_16 [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-12556;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -7287663189248931345LL : -755246889825392830LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 2898255064U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 2968611657U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)35 : (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 435142444 : -984757489;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 7681221849594692875LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
