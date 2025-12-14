#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3955384548713615036LL;
unsigned long long int var_6 = 15367997201835945563ULL;
unsigned int var_8 = 1787709295U;
signed char var_10 = (signed char)58;
long long int var_11 = -8209917674458326579LL;
int var_12 = 2144714354;
unsigned int var_18 = 59701931U;
int zero = 0;
signed char var_20 = (signed char)-20;
signed char var_21 = (signed char)70;
long long int var_22 = 514266851698932599LL;
short var_23 = (short)-21372;
unsigned long long int arr_4 [24] ;
unsigned long long int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 15335880473035841209ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 10497203512254980107ULL : 16566855219708832095ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
