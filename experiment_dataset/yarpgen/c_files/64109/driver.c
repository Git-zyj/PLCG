#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3044076359414117974LL;
long long int var_5 = 9153831691269044553LL;
long long int var_8 = 7648537230632823341LL;
long long int var_11 = -6177193819175982571LL;
unsigned char var_12 = (unsigned char)98;
short var_14 = (short)-17128;
int zero = 0;
unsigned long long int var_15 = 6737734652719243561ULL;
long long int var_16 = 6719472774733299162LL;
signed char var_17 = (signed char)15;
unsigned long long int var_18 = 10877534122641208386ULL;
short var_19 = (short)12780;
long long int var_20 = -7655810720423030628LL;
unsigned long long int var_21 = 18103782873701464089ULL;
unsigned long long int var_22 = 6617501001064900181ULL;
unsigned char var_23 = (unsigned char)221;
long long int arr_4 [19] [19] [19] ;
unsigned long long int arr_13 [19] [19] [19] [19] [19] ;
unsigned char arr_6 [19] [19] ;
unsigned long long int arr_21 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -7430178671258517754LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = 4582674465913349074ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_21 [i_0] = 23207037385615900ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
