#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
unsigned int var_1 = 1624639906U;
_Bool var_3 = (_Bool)0;
long long int var_6 = 4995287402093897695LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 17102031757317202971ULL;
unsigned char var_12 = (unsigned char)22;
int zero = 0;
short var_13 = (short)18706;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)76;
_Bool var_16 = (_Bool)1;
long long int var_17 = -6556032587770159844LL;
signed char var_18 = (signed char)-85;
unsigned char var_19 = (unsigned char)206;
_Bool var_20 = (_Bool)1;
long long int arr_1 [24] [24] ;
short arr_4 [24] [24] [24] ;
short arr_6 [10] [10] ;
unsigned long long int arr_9 [10] [10] ;
unsigned long long int arr_10 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 1774038503544603759LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)3796;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (short)7135;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = 6756258823473335366ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 5172942287161584360ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
