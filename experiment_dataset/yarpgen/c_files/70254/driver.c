#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11847240996159210386ULL;
unsigned long long int var_1 = 3224607771716046916ULL;
unsigned short var_2 = (unsigned short)6526;
unsigned char var_4 = (unsigned char)95;
unsigned short var_6 = (unsigned short)4370;
short var_7 = (short)-10032;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 14444107976612450098ULL;
short var_12 = (short)9367;
int zero = 0;
unsigned int var_14 = 2276921619U;
long long int var_15 = -2375278597517830838LL;
_Bool var_16 = (_Bool)1;
long long int var_17 = -542030020912574899LL;
int var_18 = -40028166;
unsigned char var_19 = (unsigned char)16;
int arr_0 [21] ;
int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -89088928;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 532646384;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
