#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -538820104;
int var_1 = -1075732365;
_Bool var_2 = (_Bool)1;
int var_3 = -861990749;
signed char var_4 = (signed char)-86;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 12349447571885390271ULL;
int var_11 = -2039601979;
int var_12 = -2017808051;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)96;
unsigned char var_17 = (unsigned char)158;
int var_19 = -1872648267;
int zero = 0;
unsigned long long int var_20 = 9039513878384650164ULL;
long long int var_21 = -6917589441844706389LL;
signed char var_22 = (signed char)-77;
unsigned char var_23 = (unsigned char)133;
_Bool var_24 = (_Bool)1;
signed char arr_3 [12] [12] ;
unsigned char arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)94;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
