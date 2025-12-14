#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6860244855340730133LL;
int var_3 = 236082959;
unsigned int var_5 = 1801248115U;
signed char var_8 = (signed char)-105;
signed char var_10 = (signed char)-18;
signed char var_12 = (signed char)-108;
int var_13 = 1991069606;
unsigned int var_14 = 1364325970U;
int zero = 0;
unsigned char var_15 = (unsigned char)18;
unsigned char var_16 = (unsigned char)114;
unsigned short var_17 = (unsigned short)3363;
unsigned long long int var_18 = 11551011043738741084ULL;
unsigned int var_19 = 3897368552U;
short var_20 = (short)28649;
_Bool arr_1 [15] ;
signed char arr_2 [15] [15] ;
unsigned char arr_3 [15] [15] ;
int arr_4 [15] ;
unsigned long long int arr_5 [15] [15] [15] ;
_Bool arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -1099631508;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 13952032310737788057ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
