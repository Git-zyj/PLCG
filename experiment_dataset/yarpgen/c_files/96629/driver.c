#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6307393906958708390ULL;
signed char var_2 = (signed char)30;
long long int var_6 = -5521635775335089772LL;
signed char var_8 = (signed char)13;
unsigned short var_10 = (unsigned short)4191;
unsigned long long int var_12 = 8110752449521243222ULL;
unsigned long long int var_15 = 3215022254416504033ULL;
int zero = 0;
unsigned int var_17 = 3024329100U;
_Bool var_18 = (_Bool)1;
int var_19 = 532127226;
signed char var_20 = (signed char)-111;
_Bool var_21 = (_Bool)1;
signed char arr_0 [22] ;
unsigned long long int arr_1 [22] [22] ;
unsigned char arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 6596605100242822604ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)79 : (unsigned char)157;
}

void checksum() {
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
