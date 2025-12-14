#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40756;
int var_3 = 191620909;
unsigned char var_5 = (unsigned char)146;
int var_10 = 89999468;
unsigned short var_11 = (unsigned short)64024;
int var_13 = -883676066;
unsigned short var_14 = (unsigned short)21199;
int zero = 0;
unsigned short var_15 = (unsigned short)58549;
int var_16 = 422682834;
int var_17 = 1580071418;
int var_18 = -913891077;
unsigned char arr_0 [18] ;
int arr_1 [18] ;
signed char arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -697902061;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)16;
}

void checksum() {
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
