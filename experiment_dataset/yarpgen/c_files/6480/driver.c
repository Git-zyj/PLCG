#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7084353094592410982LL;
signed char var_1 = (signed char)-122;
signed char var_2 = (signed char)-25;
long long int var_3 = 329613989417534589LL;
long long int var_4 = -2592595485680000976LL;
unsigned int var_5 = 1580909438U;
unsigned long long int var_7 = 17933966241446138786ULL;
unsigned long long int var_8 = 12552284282524486290ULL;
unsigned long long int var_9 = 15395283563971804312ULL;
int zero = 0;
unsigned long long int var_10 = 6246754989201689911ULL;
unsigned long long int var_11 = 17453531059774892316ULL;
unsigned short arr_1 [11] ;
unsigned char arr_2 [11] [11] [11] ;
unsigned long long int arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)24594;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 9456258712885325366ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
