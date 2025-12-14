#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-109;
unsigned char var_3 = (unsigned char)149;
long long int var_4 = 137285488947913469LL;
signed char var_7 = (signed char)75;
short var_10 = (short)-15557;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -2186677291670173978LL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2847664182U;
unsigned long long int var_15 = 13550865121923713848ULL;
short var_16 = (short)29;
unsigned char var_17 = (unsigned char)140;
long long int var_18 = 3235963736356423673LL;
unsigned long long int arr_0 [16] ;
_Bool arr_1 [16] ;
short arr_5 [16] ;
unsigned char arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 853191642733159751ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)-1886;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)241;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
