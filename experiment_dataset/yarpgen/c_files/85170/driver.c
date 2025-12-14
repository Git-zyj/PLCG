#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2569937985229910995LL;
long long int var_1 = 3850416017326902570LL;
short var_6 = (short)29973;
unsigned long long int var_9 = 11940451677411528633ULL;
long long int var_10 = 6319849413011718806LL;
unsigned short var_15 = (unsigned short)34117;
int zero = 0;
short var_17 = (short)-27022;
signed char var_18 = (signed char)-112;
unsigned long long int var_19 = 10713022230059460149ULL;
unsigned long long int var_20 = 4565768477016634096ULL;
short var_21 = (short)-27858;
unsigned short arr_2 [10] [10] ;
short arr_3 [10] ;
short arr_10 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)7497;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)-23604;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-12366 : (short)-12365;
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
