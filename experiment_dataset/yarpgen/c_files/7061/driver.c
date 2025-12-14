#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1654630300;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)2;
int var_4 = 1078213298;
unsigned long long int var_6 = 4016035637509199679ULL;
int var_7 = 1753685345;
unsigned long long int var_8 = 5213294882279042408ULL;
unsigned long long int var_10 = 9571668605314116330ULL;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-101;
unsigned int var_15 = 1320108043U;
int zero = 0;
long long int var_16 = -1757609796219459167LL;
unsigned long long int var_17 = 618160117135037983ULL;
unsigned int var_18 = 4085710051U;
long long int var_19 = 7302361976833700790LL;
unsigned short var_20 = (unsigned short)14150;
_Bool arr_0 [24] ;
signed char arr_1 [24] ;
unsigned long long int arr_4 [22] ;
signed char arr_5 [22] [22] ;
int arr_2 [24] [24] ;
_Bool arr_3 [24] [24] ;
unsigned long long int arr_6 [22] ;
unsigned short arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-47 : (signed char)89;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 3291284770953710032ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 1650270258 : -1977245895;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 16004631331854150000ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned short)51235;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
