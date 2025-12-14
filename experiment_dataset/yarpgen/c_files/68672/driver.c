#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48687;
short var_1 = (short)-17934;
unsigned short var_4 = (unsigned short)63915;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)38999;
int zero = 0;
unsigned short var_11 = (unsigned short)32333;
unsigned long long int var_12 = 8788420231779874049ULL;
signed char var_13 = (signed char)-107;
unsigned long long int var_14 = 2480432609287398106ULL;
unsigned short var_15 = (unsigned short)48720;
long long int var_16 = 5391325470589515262LL;
unsigned short arr_0 [24] ;
unsigned short arr_2 [24] [24] ;
signed char arr_4 [24] [24] ;
long long int arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)33978 : (unsigned short)50225;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)34524;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-49 : (signed char)66;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 6193603554262900193LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
