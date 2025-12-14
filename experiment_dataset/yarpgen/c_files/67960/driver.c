#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1809756404U;
unsigned int var_3 = 1419751831U;
int var_12 = -1517684513;
unsigned long long int var_14 = 3148211298036785200ULL;
unsigned char var_15 = (unsigned char)214;
unsigned long long int var_18 = 11334168777294351341ULL;
int zero = 0;
long long int var_20 = 3987408500285917235LL;
int var_21 = -1166341244;
unsigned char var_22 = (unsigned char)164;
unsigned char var_23 = (unsigned char)251;
int var_24 = -1219324253;
int var_25 = 1515755362;
unsigned int arr_0 [20] [20] ;
unsigned char arr_5 [20] [20] [20] ;
signed char arr_9 [20] [20] ;
unsigned char arr_12 [18] ;
int arr_13 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 2896175066U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = -377588937;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
