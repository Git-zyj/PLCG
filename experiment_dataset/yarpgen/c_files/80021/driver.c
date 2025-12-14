#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -7296715422679980855LL;
unsigned char var_13 = (unsigned char)125;
unsigned char var_15 = (unsigned char)148;
unsigned char var_16 = (unsigned char)209;
unsigned char var_17 = (unsigned char)19;
unsigned int var_19 = 3804298789U;
int zero = 0;
unsigned char var_20 = (unsigned char)65;
unsigned char var_21 = (unsigned char)215;
int var_22 = 126584711;
int arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -327779094;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
