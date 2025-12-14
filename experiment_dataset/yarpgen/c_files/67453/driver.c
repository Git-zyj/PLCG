#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4760960765877176299LL;
unsigned char var_1 = (unsigned char)5;
long long int var_2 = 3664339704750624874LL;
long long int var_3 = -8341453881566545003LL;
unsigned int var_4 = 3912214137U;
unsigned long long int var_5 = 17641310476251478232ULL;
unsigned char var_7 = (unsigned char)119;
unsigned long long int var_8 = 16108973533963667248ULL;
unsigned long long int var_9 = 14117903866291444714ULL;
signed char var_10 = (signed char)84;
long long int var_12 = -1319406400615510234LL;
unsigned char var_13 = (unsigned char)217;
int zero = 0;
short var_14 = (short)14588;
short var_15 = (short)7862;
long long int var_16 = 7364909209026384178LL;
signed char var_17 = (signed char)77;
long long int var_18 = -2712524481789312321LL;
unsigned char var_19 = (unsigned char)168;
signed char var_20 = (signed char)3;
long long int var_21 = 7335976184411052799LL;
signed char var_22 = (signed char)75;
unsigned short var_23 = (unsigned short)58243;
unsigned long long int arr_0 [18] [18] ;
unsigned long long int arr_1 [18] [18] ;
unsigned short arr_2 [18] [18] ;
long long int arr_3 [18] [18] ;
short arr_5 [18] [18] [18] ;
unsigned char arr_6 [18] ;
unsigned short arr_12 [13] ;
unsigned char arr_4 [18] [18] ;
long long int arr_9 [18] [18] ;
signed char arr_10 [18] [18] [18] ;
int arr_15 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 10956029000200579168ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 10945958835891935205ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)11496;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = -517718848054246360LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-3144;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (unsigned short)34192;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)79 : (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? -7611769169747226859LL : 497394680273484514LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)113 : (signed char)57;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = -1687801755;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
