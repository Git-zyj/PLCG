#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2354450187U;
unsigned int var_2 = 509278535U;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 16131615115077544825ULL;
unsigned int var_9 = 279548062U;
unsigned char var_11 = (unsigned char)80;
unsigned int var_12 = 1233754205U;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 2431222007U;
unsigned int var_17 = 1525324247U;
unsigned int var_18 = 2427466242U;
unsigned int var_19 = 1382265177U;
unsigned char var_20 = (unsigned char)81;
long long int var_21 = -4900311694258553165LL;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 11255984124264773081ULL;
unsigned long long int arr_1 [21] ;
_Bool arr_2 [21] ;
unsigned short arr_3 [21] ;
int arr_4 [21] ;
unsigned long long int arr_5 [21] [21] [21] ;
unsigned int arr_6 [21] ;
unsigned char arr_7 [21] [21] ;
unsigned int arr_13 [23] ;
unsigned int arr_14 [23] [23] ;
unsigned int arr_15 [23] [23] ;
unsigned short arr_23 [23] [23] ;
_Bool arr_8 [21] ;
unsigned int arr_12 [11] ;
unsigned int arr_17 [23] ;
unsigned int arr_21 [19] ;
unsigned char arr_22 [19] [19] ;
unsigned int arr_27 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 474887575371529838ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)31186;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -1494789419;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 713781108518451118ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 3334704602U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 2954898363U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = 201105289U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = 2657196844U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)57078 : (unsigned short)61059;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 1582586567U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = 41826324U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 1225348743U : 1226159480U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)25 : (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 3839215994U : 3404333597U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
