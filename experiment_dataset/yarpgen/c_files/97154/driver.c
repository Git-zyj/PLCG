#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3201150841226123672ULL;
signed char var_1 = (signed char)114;
unsigned long long int var_2 = 17577805442967418482ULL;
int var_3 = 922145126;
unsigned long long int var_4 = 17343613938541285907ULL;
unsigned char var_5 = (unsigned char)255;
long long int var_6 = -590451094180869062LL;
unsigned short var_7 = (unsigned short)12623;
unsigned long long int var_8 = 8731260298910167862ULL;
int zero = 0;
short var_10 = (short)-24427;
short var_11 = (short)31428;
short var_12 = (short)703;
signed char var_13 = (signed char)-94;
unsigned int var_14 = 1069007730U;
int var_15 = 502534972;
unsigned long long int var_16 = 8027451317627409527ULL;
unsigned int var_17 = 3366337663U;
_Bool var_18 = (_Bool)1;
short var_19 = (short)13746;
short var_20 = (short)-26827;
unsigned long long int var_21 = 14892985019747205301ULL;
unsigned char var_22 = (unsigned char)247;
long long int var_23 = -8705982595687304100LL;
long long int arr_0 [16] ;
long long int arr_1 [16] ;
unsigned short arr_2 [16] [16] ;
_Bool arr_3 [16] [16] [16] ;
unsigned long long int arr_4 [16] ;
signed char arr_6 [16] ;
unsigned int arr_8 [16] ;
short arr_14 [16] [16] [16] [16] ;
unsigned char arr_15 [16] [16] [16] ;
long long int arr_16 [16] [16] [16] [16] ;
signed char arr_13 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 5429032937563398080LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -5353526016535022122LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)21732;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 15551129091464126052ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 1588941883U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (short)-6861;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 886002709187723417LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (signed char)41;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
