#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1039299916;
short var_7 = (short)11213;
unsigned short var_8 = (unsigned short)26338;
int zero = 0;
short var_11 = (short)-15478;
unsigned long long int var_12 = 3059325295625396491ULL;
unsigned int var_13 = 1311306771U;
unsigned long long int var_14 = 6018480144756113554ULL;
int arr_2 [17] ;
unsigned long long int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 331805318;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 12664897291849619737ULL : 15011597274381279136ULL;
}

void checksum() {
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
