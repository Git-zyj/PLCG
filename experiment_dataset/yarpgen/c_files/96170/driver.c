#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4060198736284648399LL;
short var_1 = (short)-22462;
unsigned int var_2 = 2650047386U;
long long int var_3 = -1177911345934624486LL;
long long int var_5 = -5191411490364360765LL;
short var_6 = (short)11028;
long long int var_7 = 5249741035422015082LL;
unsigned long long int var_8 = 11103795799518716419ULL;
unsigned char var_9 = (unsigned char)224;
int zero = 0;
unsigned int var_10 = 3153246148U;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)30;
int var_13 = -1470271745;
unsigned char var_14 = (unsigned char)184;
int var_15 = 920602431;
unsigned char arr_0 [14] ;
long long int arr_4 [23] ;
_Bool arr_5 [23] [23] ;
_Bool arr_2 [14] ;
long long int arr_3 [14] ;
unsigned int arr_6 [23] ;
_Bool arr_7 [23] ;
_Bool arr_8 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -2205760068648830836LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 7718092213458733476LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 1483897398U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
