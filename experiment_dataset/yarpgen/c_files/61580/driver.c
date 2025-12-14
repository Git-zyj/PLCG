#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-95;
long long int var_4 = -1245649439619257490LL;
unsigned char var_7 = (unsigned char)21;
signed char var_8 = (signed char)-124;
short var_13 = (short)-5641;
int zero = 0;
short var_16 = (short)-16960;
signed char var_17 = (signed char)73;
signed char var_18 = (signed char)-77;
short var_19 = (short)28142;
signed char var_20 = (signed char)125;
unsigned char var_21 = (unsigned char)85;
signed char var_22 = (signed char)-106;
signed char var_23 = (signed char)-121;
short var_24 = (short)-27708;
short arr_4 [11] [11] ;
signed char arr_7 [11] [11] [11] ;
short arr_16 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (short)7608;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (short)-22548;
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
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
