#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2549156375U;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 1199890128303142982ULL;
short var_6 = (short)-4883;
unsigned long long int var_7 = 17188694735292603423ULL;
long long int var_8 = -7554572849339236126LL;
signed char var_9 = (signed char)-56;
int var_11 = -598924610;
int zero = 0;
unsigned long long int var_12 = 2790822949031891572ULL;
signed char var_13 = (signed char)-26;
int var_14 = 985387336;
unsigned short var_15 = (unsigned short)16638;
long long int var_16 = -5680705096318701497LL;
unsigned int var_17 = 2583767034U;
signed char var_18 = (signed char)115;
unsigned short var_19 = (unsigned short)62975;
unsigned long long int var_20 = 17139367313163076211ULL;
_Bool arr_4 [20] ;
unsigned long long int arr_6 [25] ;
unsigned short arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 13285141817774192015ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)39420;
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
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
