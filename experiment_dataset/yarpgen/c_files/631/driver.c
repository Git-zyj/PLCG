#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)210;
unsigned char var_4 = (unsigned char)56;
unsigned int var_5 = 2438378899U;
long long int var_8 = -2326894323046574279LL;
unsigned long long int var_9 = 18145454254147002022ULL;
unsigned int var_12 = 1278642989U;
_Bool var_13 = (_Bool)0;
int var_15 = 67357740;
int var_16 = -1495580191;
int var_19 = 1480533368;
int zero = 0;
unsigned long long int var_20 = 17705858429682203525ULL;
short var_21 = (short)32749;
unsigned short var_22 = (unsigned short)19581;
unsigned char var_23 = (unsigned char)11;
unsigned char arr_0 [15] ;
unsigned char arr_10 [15] [15] [15] [15] [15] [15] [15] ;
_Bool arr_11 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
