#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8613;
unsigned char var_1 = (unsigned char)95;
_Bool var_2 = (_Bool)0;
short var_3 = (short)31352;
int var_4 = 300979291;
unsigned char var_5 = (unsigned char)182;
unsigned char var_6 = (unsigned char)75;
unsigned int var_7 = 2215467227U;
short var_9 = (short)-8868;
int zero = 0;
short var_10 = (short)28476;
unsigned short var_11 = (unsigned short)41030;
unsigned char var_12 = (unsigned char)144;
unsigned char var_13 = (unsigned char)216;
unsigned long long int var_14 = 2078119399844055855ULL;
unsigned int var_15 = 55948507U;
short var_16 = (short)-28326;
unsigned short var_17 = (unsigned short)29251;
unsigned char arr_2 [23] ;
short arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (short)29685;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
