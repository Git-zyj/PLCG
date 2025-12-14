#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24730;
short var_2 = (short)-7888;
signed char var_3 = (signed char)-65;
unsigned char var_7 = (unsigned char)98;
unsigned short var_8 = (unsigned short)2927;
unsigned int var_9 = 2672826184U;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 752534001931355011ULL;
unsigned int var_13 = 3415620247U;
int zero = 0;
int var_14 = -1981620622;
unsigned char var_15 = (unsigned char)53;
signed char var_16 = (signed char)-126;
signed char var_17 = (signed char)63;
int var_18 = -253942705;
unsigned char var_19 = (unsigned char)151;
int arr_3 [22] [22] ;
int arr_9 [22] [22] ;
unsigned int arr_10 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -1937146907;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 1073591798 : 883468925;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1995865094U : 479726267U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
