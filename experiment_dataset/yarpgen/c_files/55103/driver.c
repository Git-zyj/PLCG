#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
unsigned char var_1 = (unsigned char)168;
short var_2 = (short)-25312;
signed char var_6 = (signed char)-10;
long long int var_7 = 2274198252431195134LL;
short var_8 = (short)16024;
short var_9 = (short)-22992;
int zero = 0;
unsigned int var_10 = 2263380434U;
long long int var_11 = 6257257962519512045LL;
unsigned int var_12 = 2074168332U;
unsigned long long int var_13 = 12779130016589556333ULL;
short var_14 = (short)28215;
short var_15 = (short)9602;
unsigned short var_16 = (unsigned short)48949;
signed char var_17 = (signed char)46;
short var_18 = (short)8866;
long long int arr_3 [15] [15] [15] ;
unsigned int arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 8585360248962161859LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 1595018110U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
