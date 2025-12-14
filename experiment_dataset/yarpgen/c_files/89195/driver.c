#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)103;
signed char var_3 = (signed char)34;
short var_6 = (short)-23464;
unsigned int var_7 = 3698304385U;
unsigned short var_9 = (unsigned short)9241;
unsigned long long int var_10 = 1123319539701053867ULL;
unsigned long long int var_11 = 13041606263744180380ULL;
int var_12 = 1025402934;
int var_13 = 148552472;
int zero = 0;
unsigned char var_14 = (unsigned char)188;
short var_15 = (short)12653;
unsigned long long int var_16 = 6161338908094538095ULL;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 171506636U;
_Bool arr_0 [16] ;
_Bool arr_4 [16] [16] ;
long long int arr_6 [16] [16] [16] [16] ;
signed char arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 4254242262978136087LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (signed char)96;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
