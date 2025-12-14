#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7028918001292761789LL;
unsigned int var_3 = 407205605U;
long long int var_7 = 442654165278488264LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_12 = 16300746;
long long int var_13 = 2980627042696235134LL;
unsigned short var_14 = (unsigned short)61775;
long long int var_15 = -8188957295796751878LL;
unsigned char var_16 = (unsigned char)132;
unsigned long long int var_17 = 15323456048097079723ULL;
long long int var_18 = -8205889567812370795LL;
unsigned int var_19 = 1817530376U;
unsigned long long int arr_2 [19] [19] [19] ;
unsigned char arr_3 [19] ;
long long int arr_4 [19] [19] ;
unsigned short arr_5 [19] [19] ;
long long int arr_9 [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 13100625150328173299ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 6052622128318880306LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)15977;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = -925917003012777456LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
