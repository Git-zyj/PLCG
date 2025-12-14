#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3847168878065737104ULL;
int var_2 = 1675967019;
unsigned long long int var_3 = 6963693684935084969ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 5769776390678024858ULL;
unsigned int var_12 = 2553336577U;
unsigned char var_16 = (unsigned char)53;
int zero = 0;
unsigned short var_20 = (unsigned short)58266;
signed char var_21 = (signed char)45;
unsigned long long int var_22 = 3676867183437898388ULL;
int var_23 = 2050218008;
signed char var_24 = (signed char)-83;
long long int var_25 = -7780207626834197450LL;
short var_26 = (short)9273;
unsigned char var_27 = (unsigned char)186;
signed char var_28 = (signed char)-106;
short arr_0 [23] ;
unsigned long long int arr_1 [23] ;
unsigned short arr_2 [23] [23] ;
_Bool arr_8 [21] [21] [21] [21] ;
short arr_9 [21] [21] [21] [21] ;
unsigned long long int arr_11 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)22498;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 17759882202255262672ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)2575;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)12065 : (short)-14547;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 3181777418185302231ULL : 2038230746991556949ULL;
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
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
