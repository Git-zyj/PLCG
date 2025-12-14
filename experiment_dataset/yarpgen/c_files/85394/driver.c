#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34629;
long long int var_3 = 3277231991666999953LL;
unsigned long long int var_7 = 12440623947174003913ULL;
unsigned char var_8 = (unsigned char)214;
unsigned char var_9 = (unsigned char)254;
long long int var_10 = -101824040118788413LL;
unsigned short var_13 = (unsigned short)28935;
unsigned short var_14 = (unsigned short)62685;
unsigned long long int var_15 = 13364186878763475527ULL;
unsigned short var_17 = (unsigned short)27605;
unsigned char var_18 = (unsigned char)155;
unsigned short var_19 = (unsigned short)37667;
int zero = 0;
unsigned long long int var_20 = 14788662163140698845ULL;
unsigned long long int var_21 = 7736299925765684120ULL;
unsigned long long int var_22 = 9419541921794123721ULL;
unsigned long long int var_23 = 12431720479078488238ULL;
short var_24 = (short)-19108;
short arr_0 [16] [16] ;
unsigned short arr_1 [16] ;
unsigned char arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (short)16173;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)59846;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)203 : (unsigned char)6;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
