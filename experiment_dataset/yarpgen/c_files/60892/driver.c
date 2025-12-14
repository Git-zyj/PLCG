#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2133896363;
int var_1 = -1040641680;
int var_3 = -1283393971;
_Bool var_5 = (_Bool)0;
long long int var_7 = -4473278300566361832LL;
signed char var_8 = (signed char)30;
unsigned long long int var_10 = 1354656005146018764ULL;
_Bool var_11 = (_Bool)1;
int var_12 = 1121521684;
int var_13 = 1153079029;
int zero = 0;
int var_15 = 1232560512;
int var_16 = 2135196328;
unsigned int var_17 = 673940636U;
int var_18 = -1871237897;
_Bool var_19 = (_Bool)0;
int var_20 = 1957303437;
int arr_0 [17] [17] ;
int arr_1 [17] ;
int arr_2 [17] ;
int arr_6 [20] [20] ;
signed char arr_8 [20] ;
int arr_3 [17] ;
_Bool arr_4 [17] ;
int arr_5 [17] [17] ;
int arr_9 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 1798426421;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -1691329664;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -239073183;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = -872701823;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 1300461613;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = -231076805;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = -1257110524;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
