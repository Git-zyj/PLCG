#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -829457934;
long long int var_3 = 2249690557347851699LL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-23772;
unsigned long long int var_7 = 13275718844733290008ULL;
long long int var_9 = 3931236604748579355LL;
int zero = 0;
int var_10 = 290603801;
short var_11 = (short)-2910;
long long int var_12 = -3867882976067472065LL;
unsigned int var_13 = 1633743262U;
short var_14 = (short)-10605;
unsigned long long int var_15 = 10796446712351645726ULL;
unsigned long long int var_16 = 15657059513766296631ULL;
int var_17 = -2044041616;
signed char var_18 = (signed char)64;
_Bool var_19 = (_Bool)1;
unsigned short arr_2 [24] ;
unsigned short arr_12 [11] [11] [11] ;
unsigned short arr_13 [11] [11] ;
short arr_3 [24] [24] ;
unsigned short arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)14065;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)27128;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)14287;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (short)5358;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)31975;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
