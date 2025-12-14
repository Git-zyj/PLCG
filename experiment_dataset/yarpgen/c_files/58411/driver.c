#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1583846694902197713ULL;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)7115;
unsigned short var_3 = (unsigned short)44481;
long long int var_4 = -7116339707826618314LL;
unsigned short var_5 = (unsigned short)37315;
long long int var_6 = -1918906956457017547LL;
unsigned long long int var_7 = 5797859106565229648ULL;
unsigned long long int var_9 = 16401531802468451337ULL;
int var_10 = -910048406;
int var_11 = 135009231;
_Bool var_13 = (_Bool)0;
long long int var_14 = -1269593317355578879LL;
unsigned long long int var_15 = 10153780967528339750ULL;
long long int var_16 = -36387619226334830LL;
int zero = 0;
unsigned long long int var_18 = 7298001093730991255ULL;
unsigned short var_19 = (unsigned short)37248;
short var_20 = (short)-29001;
int var_21 = 1594265009;
unsigned long long int var_22 = 11234311932578717734ULL;
unsigned short var_23 = (unsigned short)1854;
short var_24 = (short)-1432;
signed char var_25 = (signed char)72;
unsigned short var_26 = (unsigned short)734;
_Bool var_27 = (_Bool)0;
long long int var_28 = -4989350949705515901LL;
unsigned short var_29 = (unsigned short)61538;
_Bool arr_0 [12] ;
unsigned long long int arr_3 [12] [12] [12] ;
short arr_4 [12] [12] ;
unsigned short arr_5 [12] [12] [12] ;
unsigned short arr_6 [12] ;
signed char arr_10 [13] ;
unsigned short arr_11 [13] [13] ;
_Bool arr_12 [13] ;
int arr_32 [12] ;
unsigned long long int arr_33 [12] [12] [12] ;
_Bool arr_36 [12] [12] [12] ;
long long int arr_9 [12] ;
short arr_13 [13] ;
int arr_17 [11] ;
unsigned long long int arr_24 [11] [11] [11] ;
unsigned long long int arr_25 [11] ;
_Bool arr_38 [12] [12] [12] ;
unsigned short arr_39 [12] [12] [12] ;
unsigned short arr_40 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 17164350102228141949ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (short)31943;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)6354;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)49434;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)7725;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? -797864486 : -210081776;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 14764031070464247575ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 3206117270629795020LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (short)-23724;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = 1759416862;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 10239048207844237872ULL : 12144309766867606496ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? 17678047690793476028ULL : 1627286381212890216ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)34284 : (unsigned short)41861;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54275 : (unsigned short)19391;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_39 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_40 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
