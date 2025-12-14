#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1718244321817442763LL;
short var_1 = (short)19439;
unsigned char var_3 = (unsigned char)108;
_Bool var_4 = (_Bool)1;
int var_6 = 407894483;
unsigned int var_9 = 3590120302U;
short var_11 = (short)6984;
int var_12 = -1673377721;
short var_14 = (short)28444;
int var_15 = 1090111362;
int zero = 0;
unsigned int var_16 = 1763919203U;
short var_17 = (short)9841;
unsigned long long int var_18 = 8845466122120154221ULL;
int var_19 = -441766470;
int var_20 = -1229214714;
_Bool arr_1 [25] ;
unsigned int arr_2 [25] ;
_Bool arr_3 [22] ;
unsigned long long int arr_4 [22] [22] ;
short arr_5 [22] [22] ;
signed char arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 1535634023U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 12204754216365038731ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (short)28;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (signed char)-106;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
