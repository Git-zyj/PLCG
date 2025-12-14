#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25380;
unsigned long long int var_4 = 5069501973439510104ULL;
signed char var_9 = (signed char)-108;
short var_10 = (short)-7973;
signed char var_12 = (signed char)86;
unsigned short var_14 = (unsigned short)39432;
int zero = 0;
signed char var_16 = (signed char)-60;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)60075;
unsigned int var_20 = 567069406U;
_Bool var_21 = (_Bool)1;
int var_22 = 1840309072;
_Bool arr_0 [16] ;
short arr_1 [16] [16] ;
unsigned long long int arr_2 [16] [16] ;
unsigned long long int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-7759;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 8145086506085528942ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 17038306750221184830ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
