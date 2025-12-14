#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9214362828118932558ULL;
signed char var_3 = (signed char)59;
signed char var_4 = (signed char)-66;
unsigned long long int var_5 = 12402053553214591768ULL;
unsigned long long int var_10 = 3427707714091116622ULL;
int zero = 0;
int var_11 = -470022990;
signed char var_12 = (signed char)4;
short var_13 = (short)-4827;
unsigned int var_14 = 584021867U;
long long int var_15 = -2774527348076934784LL;
signed char var_16 = (signed char)127;
unsigned short arr_0 [10] [10] ;
long long int arr_2 [10] ;
long long int arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)44845 : (unsigned short)37733;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -8471978876261941789LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? -777906050873581905LL : 121104912626401266LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
