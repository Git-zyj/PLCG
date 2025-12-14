#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54151;
unsigned short var_7 = (unsigned short)12239;
unsigned char var_15 = (unsigned char)244;
unsigned int var_16 = 359787005U;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-30;
unsigned long long int var_19 = 17397787095462133313ULL;
signed char var_20 = (signed char)81;
long long int var_21 = 7493732953918151224LL;
unsigned long long int arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 12926470460233652813ULL;
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
