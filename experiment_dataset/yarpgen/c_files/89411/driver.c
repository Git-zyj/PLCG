#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)188;
short var_6 = (short)-17585;
long long int var_8 = -5827551831907271546LL;
unsigned char var_11 = (unsigned char)132;
unsigned int var_12 = 59864144U;
unsigned char var_13 = (unsigned char)187;
unsigned char var_15 = (unsigned char)126;
unsigned long long int var_17 = 9355731438622430306ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = -227802530;
unsigned char var_20 = (unsigned char)214;
unsigned short var_21 = (unsigned short)16992;
unsigned long long int arr_0 [17] ;
unsigned int arr_1 [17] ;
signed char arr_3 [17] [17] ;
unsigned int arr_4 [17] [17] ;
unsigned int arr_5 [17] [17] ;
signed char arr_6 [17] ;
unsigned int arr_7 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1176818568306219200ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 3670281379U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 2207391360U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 3839226802U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 1509629937U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
