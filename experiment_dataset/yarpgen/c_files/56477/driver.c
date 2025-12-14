#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4340575198226540731ULL;
unsigned int var_3 = 2357987424U;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)225;
unsigned int var_7 = 413669676U;
int var_8 = 1653634543;
_Bool var_10 = (_Bool)0;
long long int var_12 = 1343133613826024323LL;
unsigned long long int var_16 = 12823585611037183157ULL;
int zero = 0;
long long int var_17 = 2129911032678177816LL;
unsigned long long int var_18 = 1695497055111989120ULL;
signed char var_19 = (signed char)-109;
unsigned int var_20 = 1657793472U;
unsigned long long int var_21 = 15413863426019484909ULL;
unsigned short var_22 = (unsigned short)22389;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-30864;
signed char var_25 = (signed char)-105;
unsigned char var_26 = (unsigned char)110;
long long int arr_3 [21] ;
unsigned long long int arr_9 [21] [21] ;
unsigned long long int arr_10 [21] [21] [21] [21] ;
unsigned long long int arr_12 [21] ;
unsigned int arr_18 [21] [21] [21] [21] [21] [21] ;
unsigned short arr_8 [21] ;
signed char arr_15 [21] ;
unsigned int arr_16 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -4970836197430653592LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = 1872067548408420243ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2239709609454199712ULL : 10159637143684961820ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 7512368244130637237ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1005242874U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (unsigned short)51335;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (signed char)-37 : (signed char)42;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 852202973U : 1247122998U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
