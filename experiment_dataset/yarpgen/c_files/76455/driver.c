#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 7556494141467573413LL;
_Bool var_3 = (_Bool)0;
long long int var_4 = 2270018873775215895LL;
unsigned int var_5 = 112497391U;
unsigned char var_6 = (unsigned char)78;
unsigned long long int var_7 = 5586346380368179212ULL;
unsigned long long int var_8 = 17619945572410737107ULL;
signed char var_9 = (signed char)0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)7;
unsigned char var_12 = (unsigned char)159;
int zero = 0;
unsigned long long int var_13 = 3651258940276868214ULL;
unsigned char var_14 = (unsigned char)177;
unsigned char var_15 = (unsigned char)215;
unsigned long long int var_16 = 17441890983843751771ULL;
_Bool var_17 = (_Bool)1;
long long int var_18 = 4140933986272503682LL;
unsigned char var_19 = (unsigned char)84;
unsigned long long int var_20 = 10413530173611758876ULL;
unsigned long long int var_21 = 3846308004876062962ULL;
unsigned long long int arr_9 [13] ;
int arr_13 [13] ;
unsigned char arr_20 [13] [13] [13] [13] [13] [13] ;
unsigned char arr_24 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 9394880330570751429ULL : 6982494265269619392ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -829649974 : -1457116469;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned char)149 : (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (unsigned char)193 : (unsigned char)192;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
