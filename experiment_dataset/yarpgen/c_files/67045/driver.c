#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 121794891622259609ULL;
long long int var_3 = 6937674998276876802LL;
short var_4 = (short)27565;
unsigned char var_5 = (unsigned char)25;
unsigned int var_6 = 376771173U;
unsigned int var_7 = 1962728478U;
unsigned long long int var_8 = 10612388555699538393ULL;
unsigned int var_9 = 2703443461U;
long long int var_10 = 7788403548912444650LL;
long long int var_11 = -2226749387162278640LL;
int var_13 = -281453453;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)37839;
long long int var_16 = 1726441706502955540LL;
unsigned long long int var_17 = 17492893822791058972ULL;
unsigned char var_18 = (unsigned char)74;
short var_19 = (short)-16646;
short var_20 = (short)10167;
long long int arr_5 [16] [16] ;
int arr_10 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -1833110352158513006LL : 7722063979439210687LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -1597877722 : 42311982;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
