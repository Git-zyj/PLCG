#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)158;
unsigned char var_6 = (unsigned char)185;
signed char var_7 = (signed char)-41;
unsigned short var_8 = (unsigned short)34280;
int var_10 = 553472354;
unsigned char var_11 = (unsigned char)104;
signed char var_12 = (signed char)-3;
unsigned long long int var_14 = 12291674332711642864ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)239;
unsigned long long int var_16 = 265779737025630851ULL;
unsigned char var_17 = (unsigned char)241;
unsigned char arr_0 [16] [16] ;
int arr_2 [16] [16] ;
short arr_3 [16] ;
unsigned char arr_4 [16] [16] ;
unsigned char arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 128831202 : 1788928855;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)-15572;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)40 : (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)204 : (unsigned char)203;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
