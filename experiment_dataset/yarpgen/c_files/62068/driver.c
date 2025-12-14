#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2971611232521374948ULL;
unsigned long long int var_5 = 716179089717007046ULL;
unsigned char var_9 = (unsigned char)249;
int var_10 = -1543329209;
unsigned long long int var_11 = 17723195120788064235ULL;
unsigned long long int var_12 = 11153028104097488812ULL;
unsigned char var_13 = (unsigned char)14;
int var_14 = -149517668;
unsigned char var_15 = (unsigned char)240;
int zero = 0;
unsigned char var_17 = (unsigned char)227;
int var_18 = -24625812;
unsigned char var_19 = (unsigned char)31;
unsigned char var_20 = (unsigned char)22;
_Bool var_21 = (_Bool)1;
int var_22 = 1448919082;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 1465901980U;
unsigned long long int var_25 = 15629877397000055753ULL;
unsigned long long int var_26 = 14388387096760819643ULL;
int var_27 = -1504442020;
unsigned char var_28 = (unsigned char)108;
unsigned long long int var_29 = 14972455378183532194ULL;
int var_30 = -1103851863;
signed char var_31 = (signed char)32;
_Bool var_32 = (_Bool)0;
int var_33 = 579457463;
unsigned char var_34 = (unsigned char)33;
unsigned char arr_0 [25] [25] ;
int arr_1 [25] ;
signed char arr_3 [25] ;
signed char arr_4 [25] [25] [25] ;
unsigned int arr_5 [18] [18] ;
unsigned char arr_6 [18] [18] ;
int arr_11 [18] ;
int arr_13 [18] [18] ;
unsigned long long int arr_15 [18] [18] [18] [18] ;
signed char arr_16 [18] ;
signed char arr_21 [18] [18] [18] ;
_Bool arr_17 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1319618412;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 2894906313U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = 1240745565;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = 826888848;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 4114219361418976093ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (_Bool)1;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
