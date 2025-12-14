#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-42;
unsigned long long int var_1 = 7253839763644951536ULL;
signed char var_2 = (signed char)0;
unsigned long long int var_5 = 7074478854270174642ULL;
signed char var_9 = (signed char)-20;
signed char var_10 = (signed char)112;
int zero = 0;
signed char var_11 = (signed char)-99;
unsigned char var_12 = (unsigned char)68;
unsigned long long int var_13 = 11443113528432831835ULL;
unsigned long long int var_14 = 7587026055697559466ULL;
short var_15 = (short)5420;
signed char var_16 = (signed char)81;
unsigned long long int var_17 = 16455448144586131614ULL;
long long int var_18 = 2478247766822732818LL;
short var_19 = (short)-9052;
short var_20 = (short)15111;
unsigned long long int var_21 = 18229857924426627540ULL;
long long int var_22 = -7261740099378700986LL;
signed char var_23 = (signed char)-35;
signed char var_24 = (signed char)51;
signed char var_25 = (signed char)-49;
unsigned char var_26 = (unsigned char)131;
unsigned long long int var_27 = 15558923487283587122ULL;
unsigned long long int arr_0 [13] ;
signed char arr_1 [13] ;
unsigned char arr_2 [13] ;
unsigned long long int arr_3 [13] [13] ;
signed char arr_4 [13] ;
signed char arr_8 [12] ;
signed char arr_9 [12] ;
unsigned long long int arr_10 [12] [12] ;
unsigned char arr_11 [12] ;
unsigned char arr_12 [12] [12] ;
unsigned long long int arr_6 [13] ;
short arr_7 [13] [13] ;
signed char arr_14 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 9035970460639988278ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 11051303378464083614ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)22 : (signed char)-73;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)-64 : (signed char)46;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 14645743817933240603ULL : 10525926615843951474ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)98 : (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 8767296144996546526ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (short)31792;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)120 : (signed char)6;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
