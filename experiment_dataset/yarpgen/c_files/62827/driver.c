#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 902755470U;
_Bool var_3 = (_Bool)1;
long long int var_7 = 1091841954673162258LL;
signed char var_10 = (signed char)-32;
long long int var_12 = -3698891271503974933LL;
unsigned long long int var_15 = 17187677260661153581ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = -144903518;
unsigned char var_19 = (unsigned char)120;
unsigned char var_20 = (unsigned char)111;
unsigned int var_21 = 2962083433U;
unsigned char var_22 = (unsigned char)42;
unsigned long long int arr_1 [19] ;
unsigned short arr_2 [19] [19] ;
signed char arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 16172493764306648887ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)59151;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (signed char)-70;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
