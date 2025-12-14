#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1121565359499989208ULL;
unsigned long long int var_1 = 11798789153277845422ULL;
long long int var_2 = -2424938533597599179LL;
signed char var_3 = (signed char)-124;
unsigned char var_4 = (unsigned char)99;
unsigned short var_5 = (unsigned short)61443;
short var_6 = (short)-22016;
long long int var_9 = 2772037492879996236LL;
long long int var_12 = 3730635326849726336LL;
unsigned long long int var_13 = 7730075484460273613ULL;
unsigned short var_15 = (unsigned short)50982;
long long int var_16 = 4968184992418002081LL;
int zero = 0;
unsigned short var_18 = (unsigned short)1090;
long long int var_19 = -3397886378067485024LL;
unsigned int var_20 = 3573466570U;
short var_21 = (short)10810;
long long int var_22 = -1149235852339498426LL;
unsigned short var_23 = (unsigned short)58672;
int var_24 = -1851420454;
unsigned long long int var_25 = 1968595776723442291ULL;
short var_26 = (short)16004;
long long int var_27 = -7558131703831992235LL;
signed char var_28 = (signed char)58;
unsigned short var_29 = (unsigned short)21200;
short var_30 = (short)-27983;
unsigned long long int arr_3 [15] ;
_Bool arr_4 [15] [15] [15] ;
unsigned int arr_7 [23] ;
long long int arr_8 [23] [23] ;
int arr_9 [23] [23] ;
unsigned short arr_12 [20] [20] ;
long long int arr_13 [20] ;
long long int arr_18 [15] ;
unsigned char arr_23 [15] [15] [15] [15] ;
unsigned long long int arr_5 [15] ;
_Bool arr_10 [23] ;
unsigned int arr_11 [23] [23] ;
long long int arr_19 [15] [15] ;
short arr_20 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 8384179652306392157ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 3724284771U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = 4542847407049817650LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = -1442296991;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)59566;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = 1379758588238957092LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = -3930824163773127199LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 269189593910234336ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = 3913934364U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_19 [i_0] [i_1] = -4295319430481092388LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_20 [i_0] [i_1] = (short)-1950;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
