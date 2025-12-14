#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22530;
unsigned char var_4 = (unsigned char)204;
short var_6 = (short)11733;
unsigned char var_7 = (unsigned char)26;
unsigned char var_16 = (unsigned char)156;
short var_17 = (short)-8392;
short var_19 = (short)-18723;
int zero = 0;
unsigned char var_20 = (unsigned char)229;
unsigned char var_21 = (unsigned char)106;
unsigned char var_22 = (unsigned char)73;
unsigned char var_23 = (unsigned char)126;
short var_24 = (short)1038;
unsigned char var_25 = (unsigned char)221;
short arr_1 [14] ;
short arr_2 [14] ;
int arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)-5335;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)30803;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = -263461104;
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
