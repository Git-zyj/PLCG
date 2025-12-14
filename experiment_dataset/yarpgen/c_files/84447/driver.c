#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5587457523987410561ULL;
int var_3 = -1854417241;
signed char var_6 = (signed char)81;
_Bool var_8 = (_Bool)1;
short var_10 = (short)14242;
signed char var_11 = (signed char)94;
unsigned char var_12 = (unsigned char)92;
unsigned short var_14 = (unsigned short)8249;
short var_15 = (short)3175;
unsigned char var_17 = (unsigned char)59;
signed char var_18 = (signed char)118;
unsigned short var_19 = (unsigned short)27399;
int zero = 0;
unsigned char var_20 = (unsigned char)106;
unsigned char var_21 = (unsigned char)38;
unsigned int var_22 = 3549265954U;
signed char var_23 = (signed char)43;
unsigned short var_24 = (unsigned short)40470;
int var_25 = -1050381372;
unsigned int var_26 = 607429454U;
unsigned char var_27 = (unsigned char)98;
unsigned long long int var_28 = 4565213459502295145ULL;
short var_29 = (short)-20833;
unsigned long long int var_30 = 13414464163197921510ULL;
int arr_1 [24] [24] ;
_Bool arr_8 [24] [24] [24] ;
long long int arr_20 [22] ;
unsigned long long int arr_6 [24] [24] ;
int arr_7 [24] [24] ;
unsigned short arr_15 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = -910465029;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = 3454437379604440832LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 3023692495361589524ULL : 13050250168492548400ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 1433848024 : -159046451;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (unsigned short)46932;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
