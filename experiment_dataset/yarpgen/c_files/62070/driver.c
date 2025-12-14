#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5341065133945995449LL;
unsigned char var_4 = (unsigned char)3;
signed char var_8 = (signed char)-30;
unsigned long long int var_9 = 12979031742224219110ULL;
unsigned char var_11 = (unsigned char)206;
signed char var_13 = (signed char)-9;
short var_14 = (short)-20752;
int zero = 0;
signed char var_19 = (signed char)-106;
signed char var_20 = (signed char)-67;
unsigned short var_21 = (unsigned short)54110;
unsigned long long int arr_0 [11] ;
unsigned char arr_5 [11] ;
unsigned char arr_8 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1123278365047534646ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)12 : (unsigned char)17;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
