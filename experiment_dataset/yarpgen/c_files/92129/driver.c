#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3793248082327743895LL;
signed char var_1 = (signed char)90;
unsigned int var_2 = 642246711U;
long long int var_3 = -5110183614643370434LL;
short var_4 = (short)29362;
unsigned long long int var_5 = 11361879711429686153ULL;
signed char var_6 = (signed char)117;
unsigned short var_7 = (unsigned short)46788;
unsigned char var_8 = (unsigned char)252;
unsigned long long int var_9 = 8473849278089963907ULL;
signed char var_10 = (signed char)-5;
unsigned int var_11 = 2876364437U;
long long int var_12 = 3142297924073231249LL;
long long int var_13 = -4001408042804459919LL;
unsigned short var_14 = (unsigned short)14297;
unsigned int var_15 = 3364043774U;
signed char var_16 = (signed char)94;
long long int var_17 = -3430513548073278262LL;
unsigned long long int var_18 = 3798806086188544830ULL;
int zero = 0;
int var_19 = -1648482104;
short var_20 = (short)5084;
_Bool var_21 = (_Bool)0;
_Bool arr_1 [10] [10] ;
short arr_2 [10] ;
unsigned short arr_6 [21] ;
short arr_7 [21] ;
unsigned long long int arr_10 [19] ;
unsigned int arr_16 [18] ;
_Bool arr_21 [20] ;
_Bool arr_22 [20] ;
signed char arr_3 [10] ;
int arr_4 [10] ;
long long int arr_5 [10] ;
signed char arr_8 [21] ;
signed char arr_9 [21] ;
_Bool arr_12 [19] [19] ;
unsigned short arr_13 [19] ;
unsigned int arr_17 [18] ;
unsigned int arr_18 [18] ;
unsigned short arr_19 [18] ;
signed char arr_23 [20] ;
unsigned long long int arr_24 [20] ;
unsigned long long int arr_25 [20] [20] ;
int arr_26 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)4803 : (short)-14498;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)48030;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (short)-15773;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 15135934894917241360ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = 2766614556U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-79 : (signed char)126;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 615530613 : 306454918;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 430595353746748493LL : -2556075156962965554LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (unsigned short)30584;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = 2618414591U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = 2165915227U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (unsigned short)64334;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_23 [i_0] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = 948604454021653930ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_25 [i_0] [i_1] = 9573636048939241418ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_26 [i_0] = -64264426;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
