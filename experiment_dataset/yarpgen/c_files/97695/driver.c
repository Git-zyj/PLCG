#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15685583347228294112ULL;
short var_1 = (short)-9243;
short var_2 = (short)-15466;
short var_4 = (short)20443;
short var_5 = (short)-20859;
unsigned long long int var_6 = 5802381907341240551ULL;
short var_7 = (short)24784;
short var_8 = (short)-7557;
short var_9 = (short)-11673;
long long int var_10 = -1206478719904774209LL;
unsigned long long int var_11 = 7435281747576554907ULL;
int zero = 0;
short var_12 = (short)-15224;
short var_13 = (short)12093;
short var_14 = (short)-18150;
unsigned long long int var_15 = 12550901516626531600ULL;
long long int var_16 = -3100050567646563180LL;
unsigned long long int arr_4 [17] ;
short arr_9 [22] ;
short arr_10 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 5260620049054246961ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (short)12176;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (short)31874;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
