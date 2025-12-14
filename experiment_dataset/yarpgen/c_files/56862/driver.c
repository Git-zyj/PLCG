#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1436518337003517020ULL;
short var_8 = (short)-8036;
unsigned char var_9 = (unsigned char)173;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)79;
unsigned char var_14 = (unsigned char)114;
unsigned char var_15 = (unsigned char)191;
unsigned char var_16 = (unsigned char)86;
unsigned int var_17 = 292576285U;
unsigned short var_18 = (unsigned short)508;
unsigned char var_19 = (unsigned char)148;
unsigned int var_20 = 3735480439U;
short var_21 = (short)12672;
unsigned long long int arr_0 [11] ;
unsigned short arr_1 [11] [11] ;
unsigned long long int arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 15244114422487060504ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)19415;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 1252995414723159255ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
