#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24573;
signed char var_2 = (signed char)-96;
int var_3 = 1654786247;
short var_5 = (short)-18262;
short var_6 = (short)19280;
signed char var_7 = (signed char)83;
int var_8 = -304493573;
long long int var_9 = 1628977715699804536LL;
short var_11 = (short)-27178;
int zero = 0;
unsigned long long int var_12 = 15205474274298078145ULL;
unsigned char var_13 = (unsigned char)197;
int arr_4 [13] ;
long long int arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -726801675;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = -5247870516377620814LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
