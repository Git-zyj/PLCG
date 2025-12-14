#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = -1694451450;
long long int var_12 = -6692185562422950487LL;
unsigned long long int var_13 = 4167759838930176141ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)47920;
unsigned long long int var_17 = 17901512555480645196ULL;
unsigned long long int var_18 = 6426514869749122714ULL;
long long int var_19 = -4088544535488298664LL;
short var_20 = (short)29057;
unsigned char var_21 = (unsigned char)84;
long long int var_22 = -8865714475682270090LL;
_Bool var_23 = (_Bool)0;
int arr_0 [24] ;
unsigned long long int arr_1 [24] ;
short arr_2 [24] [24] [24] ;
unsigned long long int arr_3 [24] [24] ;
int arr_4 [24] ;
long long int arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -787875180;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1144431986489394644ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-29971;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 12075778560118271816ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 1200601097;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -4045510926808756641LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
