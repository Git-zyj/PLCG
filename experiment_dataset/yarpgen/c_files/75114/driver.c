#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -237051371;
int zero = 0;
unsigned long long int var_17 = 11025269405151870488ULL;
short var_18 = (short)5879;
long long int var_19 = -6572665788049219205LL;
int var_20 = 972472016;
unsigned int var_21 = 3877242214U;
unsigned char var_22 = (unsigned char)146;
_Bool var_23 = (_Bool)0;
long long int var_24 = 6344014434216868675LL;
long long int var_25 = 8860404215562759584LL;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 1069554368683922257ULL;
int var_28 = 2043960734;
unsigned long long int var_29 = 8416686212126771027ULL;
int var_30 = 614587276;
unsigned char var_31 = (unsigned char)177;
long long int var_32 = -5065463920808983678LL;
unsigned short var_33 = (unsigned short)14708;
short var_34 = (short)20959;
unsigned short var_35 = (unsigned short)24669;
unsigned long long int var_36 = 8252251191564227308ULL;
unsigned int var_37 = 3613138253U;
short var_38 = (short)3580;
unsigned short var_39 = (unsigned short)10164;
unsigned short var_40 = (unsigned short)59785;
_Bool var_41 = (_Bool)1;
unsigned short var_42 = (unsigned short)43036;
unsigned short var_43 = (unsigned short)6197;
_Bool var_44 = (_Bool)0;
signed char var_45 = (signed char)55;
unsigned char var_46 = (unsigned char)200;
short var_47 = (short)-3248;
_Bool arr_1 [23] ;
unsigned short arr_2 [23] ;
unsigned char arr_3 [23] [23] [23] ;
signed char arr_4 [23] [23] ;
unsigned char arr_7 [23] ;
long long int arr_8 [23] [23] ;
_Bool arr_9 [23] [23] ;
signed char arr_11 [23] [23] ;
unsigned int arr_14 [23] ;
signed char arr_15 [23] [23] ;
unsigned long long int arr_18 [12] ;
long long int arr_19 [12] ;
unsigned long long int arr_20 [12] [12] ;
long long int arr_24 [12] [12] [12] ;
signed char arr_25 [12] ;
long long int arr_27 [24] ;
unsigned short arr_28 [24] ;
unsigned char arr_30 [24] ;
_Bool arr_31 [24] [24] [24] ;
unsigned long long int arr_36 [20] [20] ;
unsigned char arr_5 [23] ;
unsigned short arr_6 [23] ;
unsigned char arr_10 [23] [23] ;
unsigned int arr_13 [23] ;
unsigned long long int arr_16 [23] [23] [23] ;
_Bool arr_21 [12] ;
unsigned long long int arr_22 [12] [12] [12] ;
signed char arr_29 [24] ;
unsigned long long int arr_32 [24] ;
unsigned short arr_33 [24] ;
unsigned int arr_37 [20] ;
unsigned long long int arr_38 [20] ;
short arr_39 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)62882;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = -478915858626972691LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = 3933386103U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = 1639010331147974313ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = -4360488234631483662LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = 3391527215895377459ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = -182406126557648783LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? -484511416006454896LL : -7338914818565041456LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (unsigned short)18063 : (unsigned short)12957;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (unsigned char)183 : (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_36 [i_0] [i_1] = (i_0 % 2 == 0) ? 1003576509240361330ULL : 6638840069701647388ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)12352;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 2558359734U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 13067569492952151817ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 6409293429648204889ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (signed char)107 : (signed char)-119;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? 13380745956068020ULL : 4112257092209050513ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42493 : (unsigned short)56021;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? 718331974U : 2716707418U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? 9563855040142004147ULL : 15524941405834250946ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? (short)21770 : (short)10263;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_39 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
