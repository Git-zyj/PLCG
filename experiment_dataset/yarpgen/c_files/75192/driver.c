#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3816581649035980214LL;
int var_4 = 1199918209;
int var_6 = 599414576;
_Bool var_8 = (_Bool)1;
short var_11 = (short)-5886;
int zero = 0;
unsigned short var_14 = (unsigned short)4491;
unsigned int var_15 = 2407624200U;
int var_16 = -1360972510;
unsigned short var_17 = (unsigned short)65208;
short var_18 = (short)19015;
unsigned long long int var_19 = 4313142662789682995ULL;
unsigned short var_20 = (unsigned short)35267;
_Bool var_21 = (_Bool)0;
short var_22 = (short)30333;
unsigned char var_23 = (unsigned char)240;
unsigned short var_24 = (unsigned short)46024;
signed char var_25 = (signed char)58;
unsigned int arr_0 [16] ;
unsigned long long int arr_3 [16] [16] ;
unsigned short arr_4 [16] ;
unsigned long long int arr_5 [16] ;
int arr_6 [16] [16] ;
signed char arr_9 [16] [16] [16] ;
short arr_11 [25] ;
int arr_13 [25] ;
_Bool arr_16 [11] ;
unsigned char arr_10 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 362039510U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 7496739608897618660ULL : 942041411601614549ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)18268 : (unsigned short)34012;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 7548990635014488949ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 1793209977;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (short)4618;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 1317539871 : 5557690;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)100 : (unsigned char)10;
}

void checksum() {
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
