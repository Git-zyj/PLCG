#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 719572898U;
unsigned short var_1 = (unsigned short)3306;
int var_3 = -269055440;
signed char var_4 = (signed char)-25;
_Bool var_6 = (_Bool)1;
int var_7 = 1380163687;
unsigned short var_9 = (unsigned short)3528;
int zero = 0;
int var_13 = 1821254139;
long long int var_14 = -3244068846272555304LL;
unsigned int var_15 = 1188138847U;
int arr_4 [11] ;
unsigned short arr_10 [21] ;
unsigned short arr_11 [21] ;
unsigned long long int arr_13 [21] ;
unsigned long long int arr_14 [21] ;
short arr_6 [11] ;
unsigned short arr_7 [11] [11] [11] ;
signed char arr_8 [11] [11] [11] ;
short arr_12 [21] ;
long long int arr_17 [21] [21] [21] ;
unsigned int arr_18 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1102957873;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (unsigned short)27628;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (unsigned short)31440;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 18269591260152615338ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 9524441881398499971ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-30349 : (short)-9079;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)24144 : (unsigned short)31007;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-27 : (signed char)45;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (short)11478;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = -9032705953982275854LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = 2386671804U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
