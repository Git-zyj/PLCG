#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 826918552U;
signed char var_3 = (signed char)96;
int var_5 = 1365458860;
int var_9 = 923281692;
unsigned long long int var_10 = 10742240971625823602ULL;
signed char var_11 = (signed char)-70;
unsigned char var_13 = (unsigned char)18;
unsigned long long int var_15 = 1820583419256013545ULL;
unsigned long long int var_16 = 12013024952906423397ULL;
unsigned short var_18 = (unsigned short)39787;
int zero = 0;
unsigned char var_19 = (unsigned char)18;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 99870951032792086ULL;
int var_22 = -2099056820;
long long int var_23 = -5346161809354327329LL;
_Bool var_24 = (_Bool)1;
long long int var_25 = -4755091161998687107LL;
unsigned int var_26 = 1214484040U;
_Bool var_27 = (_Bool)0;
short var_28 = (short)25516;
signed char var_29 = (signed char)71;
unsigned char var_30 = (unsigned char)150;
unsigned char var_31 = (unsigned char)235;
unsigned long long int var_32 = 5176137712545147817ULL;
unsigned char var_33 = (unsigned char)215;
_Bool var_34 = (_Bool)1;
unsigned long long int var_35 = 12177409149888356466ULL;
int var_36 = 803970151;
signed char arr_0 [17] [17] ;
unsigned char arr_1 [17] [17] ;
unsigned int arr_2 [17] [17] ;
unsigned long long int arr_3 [17] [17] [17] ;
unsigned long long int arr_5 [17] ;
unsigned long long int arr_7 [17] [17] [17] ;
unsigned long long int arr_8 [17] [17] [17] [17] ;
unsigned char arr_9 [17] [17] [17] ;
unsigned long long int arr_10 [17] [17] [17] ;
int arr_11 [17] [17] ;
signed char arr_12 [17] ;
unsigned long long int arr_13 [17] ;
int arr_16 [17] ;
unsigned int arr_4 [17] ;
signed char arr_17 [17] ;
unsigned long long int arr_20 [12] ;
unsigned int arr_21 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-86 : (signed char)124;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)127 : (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 3577575513U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 10022228793695406558ULL : 10921294126260541994ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 9869254541363505748ULL : 18407005787796591949ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 11203617948583770424ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 2807030556810814850ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)149 : (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 17944076893536647212ULL : 6844224335164519704ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = 29135945;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 17438707863997809679ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = -1317646232;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 423468075U : 3839974309U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (signed char)-54 : (signed char)-6;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = 12599095116697468005ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_21 [i_0] [i_1] = 114541760U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
