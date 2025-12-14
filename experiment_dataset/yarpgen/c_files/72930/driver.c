#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1657481018U;
unsigned short var_1 = (unsigned short)52065;
int var_2 = 1185989983;
long long int var_4 = 7932613905817404621LL;
long long int var_5 = 7572630325883131930LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 8796921544989511204ULL;
unsigned short var_8 = (unsigned short)9789;
unsigned char var_9 = (unsigned char)51;
unsigned char var_12 = (unsigned char)83;
int zero = 0;
short var_13 = (short)-5499;
short var_14 = (short)13423;
long long int var_15 = -1122190047425224756LL;
int var_16 = -540592035;
unsigned int var_17 = 1131381867U;
int var_18 = -1305191326;
unsigned short var_19 = (unsigned short)42756;
long long int var_20 = -3185502352186634405LL;
int var_21 = -1314624534;
unsigned char var_22 = (unsigned char)188;
signed char var_23 = (signed char)-85;
short var_24 = (short)17314;
unsigned long long int arr_1 [12] ;
unsigned long long int arr_2 [15] [15] ;
int arr_5 [15] [15] [15] ;
short arr_6 [15] ;
unsigned short arr_11 [15] [15] [15] ;
unsigned long long int arr_4 [15] [15] ;
int arr_7 [15] ;
unsigned int arr_10 [15] [15] [15] ;
unsigned short arr_13 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 9193023299597462761ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 14495942069553280929ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -2026959044 : -922021524;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (short)-4588;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)47842;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 6372377729295738104ULL : 11214428684450148000ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1177999875 : -1752507618;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2348279506U : 854566210U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)64776 : (unsigned short)48281;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
