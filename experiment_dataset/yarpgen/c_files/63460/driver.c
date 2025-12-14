#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2132329902;
unsigned long long int var_2 = 18342615980214271361ULL;
int var_3 = 728697365;
unsigned char var_5 = (unsigned char)165;
int var_6 = -787380316;
unsigned int var_9 = 1588429645U;
short var_10 = (short)-31077;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1441190961U;
unsigned char var_13 = (unsigned char)38;
short var_14 = (short)28047;
short var_15 = (short)-539;
long long int var_16 = 7232778767041054368LL;
unsigned long long int arr_0 [20] ;
long long int arr_1 [20] [20] ;
long long int arr_2 [20] [20] ;
signed char arr_4 [20] [20] [20] [20] ;
signed char arr_5 [20] [20] ;
int arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 1164309015867288522ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 6080038882255145258LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = -8321487606916309200LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = -734915192;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
