#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27388;
int var_4 = -1563900519;
short var_6 = (short)-32565;
unsigned short var_7 = (unsigned short)47605;
unsigned char var_8 = (unsigned char)171;
unsigned int var_9 = 3324031345U;
unsigned short var_10 = (unsigned short)61244;
long long int var_13 = 429301408735651190LL;
long long int var_14 = -7310572655383696219LL;
int zero = 0;
signed char var_15 = (signed char)43;
unsigned int var_16 = 4021955755U;
signed char var_17 = (signed char)42;
signed char var_18 = (signed char)-123;
long long int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 8259486862924808057LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
