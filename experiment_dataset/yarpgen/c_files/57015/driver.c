#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 134120977;
short var_1 = (short)18398;
short var_3 = (short)5551;
int var_4 = 1301616751;
unsigned long long int var_5 = 2772155532179417480ULL;
unsigned int var_8 = 458434925U;
int var_9 = -1081321058;
short var_10 = (short)-14047;
unsigned char var_11 = (unsigned char)249;
short var_12 = (short)30414;
unsigned char var_13 = (unsigned char)174;
unsigned long long int var_15 = 16062607143672457809ULL;
unsigned int var_16 = 404288277U;
unsigned int var_17 = 2179751768U;
unsigned char var_18 = (unsigned char)216;
int zero = 0;
short var_19 = (short)-13850;
unsigned int var_20 = 2570145110U;
unsigned long long int var_21 = 2423753839632970740ULL;
short var_22 = (short)4642;
short var_23 = (short)-30163;
int var_24 = -1638001759;
unsigned long long int var_25 = 14605852147782030613ULL;
unsigned int var_26 = 975385519U;
short var_27 = (short)-17046;
unsigned char var_28 = (unsigned char)206;
unsigned long long int var_29 = 13789883280016970799ULL;
short arr_0 [24] [24] ;
unsigned int arr_1 [24] ;
int arr_2 [24] [24] ;
unsigned int arr_3 [24] ;
short arr_4 [15] ;
unsigned char arr_9 [14] ;
short arr_10 [14] ;
short arr_14 [14] [14] [14] [14] ;
unsigned long long int arr_16 [14] [14] ;
unsigned int arr_7 [15] ;
short arr_18 [14] ;
unsigned long long int arr_19 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)15997;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 650240806U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = -285495092;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 1651278416U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (short)-7247;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)114 : (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)-28935 : (short)-26071;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-1779 : (short)-28426;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = 17748742582539779859ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 3425181012U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (short)-17137 : (short)-29241;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 9343534546492469183ULL : 18104909013168402613ULL;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
