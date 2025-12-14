#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2619620678159149491LL;
unsigned int var_1 = 2151654920U;
unsigned int var_2 = 2821708997U;
unsigned int var_3 = 3102735035U;
long long int var_5 = 5111452763073925878LL;
long long int var_6 = -8637798780333433447LL;
unsigned int var_8 = 874705699U;
short var_9 = (short)29068;
unsigned int var_12 = 4022903481U;
unsigned int var_13 = 3031289946U;
int zero = 0;
unsigned int var_14 = 2184465458U;
long long int var_15 = -1367814439012264877LL;
unsigned int var_16 = 664222468U;
short var_17 = (short)-19371;
unsigned int arr_0 [11] ;
long long int arr_3 [11] ;
unsigned int arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 3973348785U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -3254816906450606340LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 2282936028U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
