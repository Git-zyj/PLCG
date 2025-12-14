#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 885827077U;
long long int var_1 = -1387119135312751314LL;
unsigned int var_2 = 596280695U;
unsigned short var_3 = (unsigned short)25826;
signed char var_4 = (signed char)17;
signed char var_5 = (signed char)-24;
int var_6 = 543148705;
unsigned char var_7 = (unsigned char)118;
long long int var_8 = 8262108713732019844LL;
int var_9 = 1291757902;
signed char var_10 = (signed char)79;
int zero = 0;
unsigned char var_11 = (unsigned char)178;
signed char var_12 = (signed char)94;
unsigned char var_13 = (unsigned char)193;
long long int var_14 = 7213014683672858144LL;
unsigned int var_15 = 3830364704U;
unsigned char var_16 = (unsigned char)33;
long long int var_17 = 7415440385375262228LL;
unsigned int var_18 = 1989956266U;
short var_19 = (short)-14400;
unsigned int var_20 = 2369502645U;
long long int var_21 = -2824211321557014309LL;
unsigned short var_22 = (unsigned short)20386;
signed char var_23 = (signed char)-126;
signed char var_24 = (signed char)-111;
unsigned char var_25 = (unsigned char)65;
short var_26 = (short)-6758;
signed char var_27 = (signed char)65;
unsigned int var_28 = 4047400150U;
signed char var_29 = (signed char)-114;
unsigned int arr_1 [10] [10] ;
int arr_2 [10] [10] ;
unsigned long long int arr_3 [10] [10] ;
signed char arr_4 [10] [10] ;
_Bool arr_6 [10] [10] ;
long long int arr_14 [12] ;
unsigned char arr_15 [12] ;
unsigned long long int arr_16 [12] [12] ;
unsigned long long int arr_17 [12] [12] ;
unsigned long long int arr_19 [12] ;
unsigned short arr_20 [17] [17] ;
unsigned char arr_21 [17] ;
signed char arr_22 [17] ;
unsigned long long int arr_25 [16] [16] ;
signed char arr_7 [10] ;
signed char arr_10 [10] [10] [10] ;
unsigned short arr_27 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 1494002188U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 1272996796;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 9993922620951723530ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = -591047534114511245LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? 7450492552277438843ULL : 9786174983465446726ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? 8295607522028072809ULL : 16027232701339536354ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 14490305785013220825ULL : 10459106809069046537ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)60451 : (unsigned short)52124;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned char)150 : (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (signed char)17 : (signed char)97;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_25 [i_0] [i_1] = (i_0 % 2 == 0) ? 8403948324288486992ULL : 7125282785179533105ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned short)64594 : (unsigned short)21147;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
