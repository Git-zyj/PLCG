#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2074559840;
long long int var_2 = -5931084836521935962LL;
unsigned char var_4 = (unsigned char)178;
int var_8 = -504587310;
unsigned char var_11 = (unsigned char)109;
unsigned int var_14 = 3547536174U;
unsigned long long int var_15 = 1370305708188080173ULL;
unsigned short var_17 = (unsigned short)1547;
int zero = 0;
unsigned long long int var_18 = 15058058478322702776ULL;
unsigned short var_19 = (unsigned short)30382;
int var_20 = -597017466;
unsigned long long int var_21 = 1695588169741349040ULL;
unsigned short var_22 = (unsigned short)1131;
int arr_3 [10] [10] ;
unsigned short arr_6 [16] ;
_Bool arr_7 [16] ;
unsigned long long int arr_9 [17] ;
long long int arr_10 [17] ;
signed char arr_4 [10] ;
unsigned long long int arr_8 [16] ;
int arr_11 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = -1373499883;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned short)48830;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 13380148778352545781ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = -7646316413408042590LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 18383738175745191090ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = -17943285;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
