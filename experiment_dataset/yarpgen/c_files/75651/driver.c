#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)204;
unsigned short var_3 = (unsigned short)37268;
unsigned long long int var_4 = 17597349054796989035ULL;
unsigned long long int var_5 = 7785432695317928740ULL;
unsigned long long int var_6 = 14323232207382273531ULL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)61408;
unsigned char var_12 = (unsigned char)99;
unsigned long long int var_13 = 13191304680931892972ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 6546852919423102623ULL;
unsigned char var_17 = (unsigned char)52;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-118;
unsigned char var_20 = (unsigned char)234;
short var_21 = (short)-14911;
_Bool var_22 = (_Bool)1;
long long int var_23 = -7707689406888430929LL;
short var_24 = (short)24166;
long long int var_25 = -1580755269866605299LL;
unsigned int arr_0 [19] ;
unsigned long long int arr_1 [19] ;
unsigned short arr_5 [19] [19] [19] ;
short arr_10 [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 2039652874U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 18404429537464947119ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)59346;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-16295;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
