#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 458406651U;
unsigned int var_2 = 2226020541U;
unsigned short var_3 = (unsigned short)58605;
unsigned int var_4 = 2530421283U;
unsigned short var_5 = (unsigned short)35953;
int var_6 = -79820685;
unsigned long long int var_7 = 11363321696227976353ULL;
unsigned long long int var_8 = 509108197769969636ULL;
int var_9 = 1177908520;
int var_10 = 245864718;
unsigned long long int var_11 = 10555961292477029298ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)5753;
_Bool var_13 = (_Bool)0;
long long int var_14 = 5893057956708127596LL;
_Bool var_15 = (_Bool)0;
unsigned long long int arr_1 [12] [12] ;
unsigned short arr_3 [12] [12] ;
unsigned int arr_5 [12] ;
unsigned long long int arr_8 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 10622341940973747219ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)64550;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 4043146533U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 1506744564902196190ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
