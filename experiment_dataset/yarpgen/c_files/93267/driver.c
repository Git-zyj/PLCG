#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2078623702116283680LL;
int var_5 = 429994295;
short var_7 = (short)-11268;
int var_9 = 841736864;
short var_10 = (short)8123;
int zero = 0;
int var_11 = -1201147489;
unsigned char var_12 = (unsigned char)74;
unsigned long long int var_13 = 16954429254150322011ULL;
int var_14 = 389870780;
int var_15 = 935974584;
unsigned char arr_0 [23] [23] ;
long long int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -4533899645595823212LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
