#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3783433841U;
signed char var_1 = (signed char)56;
long long int var_2 = -3607397293401553273LL;
unsigned long long int var_3 = 4711290398564842688ULL;
unsigned char var_7 = (unsigned char)199;
signed char var_9 = (signed char)20;
short var_11 = (short)-9507;
signed char var_13 = (signed char)75;
signed char var_14 = (signed char)-19;
short var_15 = (short)3491;
unsigned int var_16 = 1566876378U;
unsigned char var_17 = (unsigned char)196;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)91;
int var_21 = -749227580;
int var_22 = -1657574584;
long long int var_23 = 2201914420701842006LL;
unsigned long long int var_24 = 6856835699928410882ULL;
unsigned int var_25 = 3887799987U;
int var_26 = 1239294913;
unsigned int var_27 = 1945659896U;
unsigned int arr_0 [11] ;
_Bool arr_1 [11] ;
signed char arr_2 [11] ;
unsigned int arr_4 [15] [15] ;
unsigned int arr_5 [15] [15] ;
signed char arr_6 [15] ;
unsigned long long int arr_3 [11] ;
unsigned long long int arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1861655806U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 260182215U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 43937237U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 17834915859224502321ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 11750652258983957150ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
