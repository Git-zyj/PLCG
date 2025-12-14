#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)109;
unsigned short var_2 = (unsigned short)41406;
unsigned long long int var_4 = 9703057812399604081ULL;
signed char var_6 = (signed char)-84;
unsigned short var_8 = (unsigned short)5030;
unsigned short var_9 = (unsigned short)11182;
unsigned int var_11 = 769250449U;
int var_12 = -138208805;
signed char var_13 = (signed char)56;
signed char var_14 = (signed char)-101;
long long int var_15 = -55787342282885277LL;
unsigned long long int var_16 = 17962344975820237608ULL;
short var_17 = (short)7384;
signed char var_18 = (signed char)97;
int zero = 0;
unsigned int var_20 = 183662613U;
unsigned int var_21 = 320779587U;
unsigned int var_22 = 3903846027U;
short var_23 = (short)-22473;
unsigned int var_24 = 140800136U;
unsigned int var_25 = 1207173472U;
unsigned int arr_3 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 4151649880U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
