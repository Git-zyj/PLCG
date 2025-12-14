#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 14689323632000087316ULL;
unsigned long long int var_2 = 707445403437944904ULL;
unsigned int var_3 = 1928181449U;
_Bool var_9 = (_Bool)1;
unsigned int var_12 = 3153011828U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 12919940107176102585ULL;
unsigned int var_18 = 466188256U;
_Bool var_19 = (_Bool)1;
int var_20 = -1238373875;
unsigned int var_21 = 36113977U;
unsigned long long int arr_0 [10] ;
unsigned long long int arr_1 [10] [10] ;
unsigned long long int arr_4 [10] ;
unsigned long long int arr_2 [10] ;
unsigned long long int arr_5 [10] ;
unsigned long long int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 11856021123791289229ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 1156003878365231461ULL : 7335373101234165167ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 8986622901151996222ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 10614557692794423379ULL : 5231786810043299645ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 8230524991126921944ULL : 16202479843739815386ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 9018425719180493798ULL : 10192894009056280064ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
