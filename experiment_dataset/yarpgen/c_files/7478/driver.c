#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1971501429U;
unsigned long long int var_2 = 10380832875384201457ULL;
unsigned long long int var_3 = 2773478521593842597ULL;
unsigned char var_5 = (unsigned char)112;
unsigned char var_6 = (unsigned char)221;
short var_7 = (short)-29266;
unsigned long long int var_8 = 7847950649964789597ULL;
long long int var_9 = 3709946583505850031LL;
unsigned long long int var_10 = 15539683603746424664ULL;
unsigned short var_11 = (unsigned short)30866;
unsigned int var_12 = 2575893859U;
long long int var_13 = 8800943646004768458LL;
int zero = 0;
signed char var_14 = (signed char)-88;
int var_15 = 370669390;
signed char var_16 = (signed char)-5;
signed char var_17 = (signed char)-6;
unsigned int var_18 = 2454261044U;
unsigned int var_19 = 3089974294U;
unsigned int var_20 = 2985520366U;
unsigned long long int var_21 = 7542152617963573785ULL;
signed char arr_0 [10] [10] ;
short arr_1 [10] ;
unsigned char arr_5 [11] ;
signed char arr_6 [11] ;
signed char arr_2 [10] [10] ;
unsigned int arr_3 [10] ;
unsigned char arr_4 [10] ;
unsigned long long int arr_9 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)14481;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)51 : (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-81 : (signed char)28;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 3271236553U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 4405001046128619927ULL : 9928110672475434001ULL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
