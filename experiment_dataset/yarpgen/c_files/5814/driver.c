#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)248;
short var_3 = (short)20861;
unsigned short var_4 = (unsigned short)25181;
unsigned short var_6 = (unsigned short)3487;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)24;
unsigned long long int var_10 = 10554536712296988278ULL;
long long int var_11 = -5533308605634134662LL;
long long int var_16 = -8229260780773934577LL;
short var_17 = (short)-21233;
int var_18 = 510969442;
int zero = 0;
long long int var_19 = 5743353609024357034LL;
int var_20 = 1482403791;
unsigned char var_21 = (unsigned char)108;
signed char var_22 = (signed char)-78;
unsigned long long int arr_0 [25] [25] ;
unsigned char arr_1 [25] [25] ;
_Bool arr_2 [25] ;
_Bool arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 8858055336428097340ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
