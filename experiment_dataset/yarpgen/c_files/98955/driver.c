#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 704692676;
unsigned long long int var_2 = 1513092315194601903ULL;
long long int var_3 = -170540109926340384LL;
long long int var_4 = 8554567656544084229LL;
unsigned short var_5 = (unsigned short)16326;
unsigned short var_7 = (unsigned short)19919;
short var_8 = (short)-26109;
long long int var_9 = 2877018796695126331LL;
short var_10 = (short)21300;
unsigned short var_11 = (unsigned short)56967;
int zero = 0;
unsigned long long int var_12 = 7101434158726705817ULL;
long long int var_13 = -1683447484474243367LL;
long long int var_14 = 2247693038919694375LL;
unsigned long long int var_15 = 8620579634108763835ULL;
short var_16 = (short)30554;
unsigned long long int var_17 = 12842731958685348061ULL;
unsigned short var_18 = (unsigned short)18809;
short var_19 = (short)-30324;
unsigned int arr_1 [11] [11] ;
short arr_3 [11] ;
unsigned long long int arr_11 [11] [11] ;
unsigned char arr_14 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 3198264511U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)18328;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = 9882782239367764271ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)181;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
