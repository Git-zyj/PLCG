#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22434;
_Bool var_5 = (_Bool)1;
int var_6 = -640621538;
long long int var_8 = -1943107165498635359LL;
unsigned int var_10 = 2317722980U;
unsigned long long int var_12 = 12864385761567980344ULL;
short var_14 = (short)-17755;
unsigned int var_15 = 3583390066U;
int zero = 0;
unsigned int var_16 = 1421630814U;
unsigned int var_17 = 2341970442U;
unsigned short var_18 = (unsigned short)59851;
unsigned int var_19 = 1434698807U;
unsigned long long int var_20 = 6637648269375804591ULL;
unsigned long long int arr_0 [23] [23] ;
unsigned int arr_4 [23] [23] [23] ;
unsigned short arr_5 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 17842289965857554034ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 854420267U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)51557;
}

void checksum() {
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
