#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -7794809198264248420LL;
unsigned long long int var_3 = 16853851183572798032ULL;
unsigned long long int var_4 = 7435951351627318825ULL;
unsigned long long int var_6 = 4205949302230719946ULL;
unsigned char var_8 = (unsigned char)135;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-12458;
short var_11 = (short)-17742;
unsigned int var_14 = 4076515213U;
int zero = 0;
short var_15 = (short)-11873;
short var_16 = (short)10510;
unsigned int var_17 = 2923733022U;
short var_18 = (short)-30826;
short var_19 = (short)25987;
unsigned short arr_3 [13] [13] [13] ;
long long int arr_4 [13] [13] ;
unsigned long long int arr_5 [13] [13] [13] [13] ;
short arr_8 [13] ;
signed char arr_11 [13] [13] ;
_Bool arr_12 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)4199;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 3300845449755709846LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1948827006873950647ULL : 13022776627565321731ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (short)-32215;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
