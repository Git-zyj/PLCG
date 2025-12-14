#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9215901344074387035LL;
long long int var_2 = -1010028567944791895LL;
long long int var_4 = -5081114269735444791LL;
long long int var_6 = -5136176527471659811LL;
long long int var_8 = -3327623790961387293LL;
long long int var_9 = -5774382394016664210LL;
int zero = 0;
long long int var_10 = -4597424748626413636LL;
long long int var_11 = 3079413814517344270LL;
long long int var_12 = -7386693892249806903LL;
long long int var_13 = -901158363989234150LL;
long long int var_14 = -5542139436155483556LL;
long long int arr_0 [20] [20] ;
long long int arr_5 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = -5181011464932203504LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -8847025570335435656LL : 6911177767609937679LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
