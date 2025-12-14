#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)53;
unsigned long long int var_3 = 15904714452977346663ULL;
unsigned long long int var_4 = 4630707169703870149ULL;
unsigned long long int var_6 = 11710815215631564210ULL;
unsigned long long int var_8 = 2436595617456564534ULL;
unsigned char var_9 = (unsigned char)91;
unsigned short var_10 = (unsigned short)9327;
unsigned long long int var_12 = 1331602593252747969ULL;
unsigned long long int var_15 = 5578101050016740578ULL;
int zero = 0;
unsigned int var_16 = 3491544953U;
signed char var_17 = (signed char)62;
unsigned int var_18 = 1064983138U;
unsigned char var_19 = (unsigned char)233;
unsigned short var_20 = (unsigned short)11048;
signed char var_21 = (signed char)30;
unsigned short var_22 = (unsigned short)44348;
signed char var_23 = (signed char)-115;
unsigned int arr_1 [15] ;
unsigned char arr_2 [15] [15] [15] ;
int arr_4 [15] ;
unsigned char arr_7 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 744239514U : 3922077705U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1738271133 : 1283391505;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)206;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
