#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6895;
signed char var_4 = (signed char)-3;
unsigned char var_10 = (unsigned char)96;
signed char var_11 = (signed char)27;
unsigned short var_13 = (unsigned short)4729;
unsigned short var_14 = (unsigned short)31105;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 563050337U;
unsigned char var_17 = (unsigned char)150;
short var_18 = (short)-4444;
int var_19 = -1153621312;
int zero = 0;
unsigned long long int var_20 = 18431598409804078268ULL;
int var_21 = 68225131;
int var_22 = -1861192708;
short var_23 = (short)8923;
unsigned char var_24 = (unsigned char)39;
signed char var_25 = (signed char)-16;
_Bool var_26 = (_Bool)0;
int arr_0 [14] ;
short arr_1 [14] [14] ;
unsigned char arr_3 [24] [24] ;
int arr_4 [24] [24] ;
int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 1764837949;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-10430;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = -306670193;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 2102097167;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
