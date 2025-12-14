#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)13;
long long int var_6 = 8347389200017891377LL;
signed char var_8 = (signed char)-97;
unsigned long long int var_9 = 11440832718110664481ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)206;
unsigned char var_11 = (unsigned char)143;
unsigned char var_12 = (unsigned char)238;
unsigned char var_13 = (unsigned char)190;
unsigned char var_14 = (unsigned char)226;
unsigned char arr_0 [18] ;
short arr_2 [18] ;
unsigned char arr_3 [18] ;
int arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)23007;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -421278473 : 2072455336;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
