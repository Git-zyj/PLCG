#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)16;
unsigned char var_1 = (unsigned char)232;
unsigned long long int var_2 = 2221125706643214715ULL;
unsigned char var_7 = (unsigned char)11;
unsigned char var_12 = (unsigned char)44;
short var_14 = (short)-12463;
signed char var_15 = (signed char)83;
int var_16 = 1169521445;
unsigned char var_17 = (unsigned char)255;
int zero = 0;
unsigned char var_19 = (unsigned char)6;
signed char var_20 = (signed char)117;
unsigned char var_21 = (unsigned char)15;
unsigned int var_22 = 1514318662U;
int var_23 = 587591992;
long long int var_24 = -3195816536618808263LL;
unsigned long long int arr_0 [22] [22] ;
unsigned short arr_1 [22] ;
_Bool arr_2 [22] [22] ;
unsigned short arr_3 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 114188852597727367ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)47755;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)55964;
}

void checksum() {
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
