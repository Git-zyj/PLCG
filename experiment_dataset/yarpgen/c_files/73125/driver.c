#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2117920791;
signed char var_6 = (signed char)-53;
unsigned long long int var_9 = 7565249429148367415ULL;
unsigned char var_10 = (unsigned char)212;
unsigned long long int var_11 = 6285225314012796062ULL;
signed char var_12 = (signed char)91;
unsigned short var_13 = (unsigned short)27791;
long long int var_15 = -7383393392799272631LL;
int zero = 0;
short var_19 = (short)-24431;
unsigned char var_20 = (unsigned char)93;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)10;
unsigned char var_23 = (unsigned char)0;
long long int var_24 = 6845171146489067129LL;
unsigned char var_25 = (unsigned char)162;
long long int arr_0 [24] ;
int arr_1 [24] ;
unsigned long long int arr_2 [24] ;
short arr_5 [24] ;
short arr_11 [24] ;
unsigned int arr_3 [24] [24] ;
short arr_4 [24] ;
long long int arr_13 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -7787591352077770543LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -329930918;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 5244364131188462354ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (short)29889;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (short)11183;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 1910137548U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-32293;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = -1610953698359031260LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
