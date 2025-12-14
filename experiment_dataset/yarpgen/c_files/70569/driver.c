#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1848226396U;
unsigned short var_4 = (unsigned short)26728;
signed char var_5 = (signed char)49;
unsigned long long int var_6 = 15982753477467252321ULL;
unsigned long long int var_9 = 5234162035603314266ULL;
long long int var_10 = -3753989817570405659LL;
unsigned short var_12 = (unsigned short)15121;
int var_13 = 228043471;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)32181;
unsigned char var_16 = (unsigned char)78;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)23184;
unsigned short arr_0 [25] ;
long long int arr_2 [25] ;
unsigned char arr_5 [25] [25] [25] ;
unsigned long long int arr_6 [25] ;
unsigned char arr_7 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)39644;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 4978276528247087940LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 7847892480083743006ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)170;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
