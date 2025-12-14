#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17778817421213693715ULL;
unsigned int var_4 = 3189424743U;
unsigned char var_7 = (unsigned char)149;
unsigned int var_9 = 408286433U;
unsigned int var_10 = 3697524712U;
unsigned int var_11 = 3349897281U;
unsigned int var_14 = 3430089392U;
int zero = 0;
short var_15 = (short)-15755;
long long int var_16 = -2467558233986188751LL;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3834241599U;
unsigned short arr_4 [13] [13] [13] ;
long long int arr_7 [14] ;
unsigned char arr_5 [13] ;
unsigned char arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)9307 : (unsigned short)44986;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -3494411101951406854LL : -477742825176088227LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)8 : (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)84 : (unsigned char)14;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
