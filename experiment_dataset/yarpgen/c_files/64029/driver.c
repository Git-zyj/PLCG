#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1256105979U;
long long int var_7 = -5868956872332470606LL;
long long int var_11 = -7226305285315447225LL;
int zero = 0;
unsigned char var_13 = (unsigned char)80;
unsigned short var_14 = (unsigned short)58120;
signed char var_15 = (signed char)-44;
unsigned char var_16 = (unsigned char)194;
signed char var_17 = (signed char)-112;
unsigned char arr_0 [10] ;
unsigned long long int arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 6538523247873476679ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
