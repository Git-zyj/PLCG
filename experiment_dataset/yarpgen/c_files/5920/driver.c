#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 282841274;
_Bool var_2 = (_Bool)0;
long long int var_3 = 5536914352956368590LL;
unsigned int var_4 = 2318996158U;
int var_5 = -682852776;
unsigned char var_6 = (unsigned char)204;
int var_7 = -1598651377;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)101;
int zero = 0;
unsigned int var_12 = 2165776053U;
unsigned int var_13 = 1024184201U;
unsigned char var_14 = (unsigned char)211;
unsigned int var_15 = 1527118090U;
unsigned int arr_0 [23] ;
unsigned char arr_3 [23] ;
unsigned short arr_5 [23] ;
unsigned int arr_6 [23] [23] [23] ;
_Bool arr_7 [23] [23] [23] [23] ;
unsigned int arr_8 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2802056049U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)25047;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2750996567U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1544501236U : 788541223U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
