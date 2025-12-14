#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1191285200356205953ULL;
unsigned short var_2 = (unsigned short)14192;
unsigned long long int var_4 = 987875094360624840ULL;
unsigned long long int var_5 = 2324671137927003325ULL;
int var_8 = -695524314;
unsigned long long int var_9 = 13972030558534729875ULL;
signed char var_11 = (signed char)125;
int zero = 0;
long long int var_14 = 7927621758789733089LL;
int var_15 = -311058594;
unsigned int var_16 = 4293484390U;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 6957784443688280227ULL;
unsigned long long int arr_0 [14] ;
long long int arr_1 [14] [14] ;
unsigned short arr_4 [14] [14] ;
unsigned char arr_5 [14] ;
signed char arr_2 [14] ;
long long int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 10628114755050117219ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 5733618920341767835LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)5671;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = -8064045926575402050LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
