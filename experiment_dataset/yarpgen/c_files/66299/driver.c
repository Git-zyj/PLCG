#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16640772375250445016ULL;
short var_1 = (short)-17549;
short var_2 = (short)-714;
unsigned long long int var_3 = 9273142058141056015ULL;
unsigned long long int var_4 = 10783530156291658624ULL;
unsigned long long int var_5 = 9987579496687873505ULL;
long long int var_7 = 3667185412708715284LL;
unsigned short var_8 = (unsigned short)41194;
signed char var_9 = (signed char)50;
unsigned char var_10 = (unsigned char)93;
unsigned char var_11 = (unsigned char)136;
unsigned int var_13 = 2642381309U;
unsigned long long int var_14 = 5282713573096539965ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = 1313052016;
signed char var_19 = (signed char)90;
unsigned long long int var_20 = 4059370132949355384ULL;
unsigned char var_21 = (unsigned char)54;
unsigned short var_22 = (unsigned short)17902;
signed char var_23 = (signed char)57;
int var_24 = 613742744;
signed char var_25 = (signed char)8;
signed char var_26 = (signed char)127;
signed char var_27 = (signed char)-126;
_Bool var_28 = (_Bool)0;
unsigned long long int var_29 = 13175043505682433144ULL;
long long int var_30 = -2508214501595394024LL;
unsigned short arr_3 [11] [11] ;
long long int arr_10 [11] [11] ;
unsigned short arr_11 [11] ;
unsigned int arr_12 [11] [11] [11] [11] [11] [11] ;
signed char arr_17 [21] [21] ;
_Bool arr_19 [21] [21] [21] ;
unsigned long long int arr_20 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)10161 : (unsigned short)26254;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? -3057429431534651384LL : -2877322061754188104LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (unsigned short)40398;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1369093776U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)87 : (signed char)127;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 6084924157186596794ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
