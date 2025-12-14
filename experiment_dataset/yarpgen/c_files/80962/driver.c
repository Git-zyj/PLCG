#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
unsigned char var_1 = (unsigned char)134;
short var_3 = (short)-29485;
short var_4 = (short)-23155;
signed char var_7 = (signed char)-60;
unsigned char var_8 = (unsigned char)154;
int var_10 = -1140153291;
long long int var_11 = -5634365984028547138LL;
int var_12 = 415310755;
int zero = 0;
unsigned char var_13 = (unsigned char)229;
unsigned int var_14 = 3227522507U;
unsigned char var_15 = (unsigned char)72;
unsigned long long int var_16 = 3463290032178158887ULL;
int var_17 = -1575293347;
int var_18 = 1330251933;
int var_19 = 755411491;
short var_20 = (short)-3473;
unsigned int var_21 = 1045925686U;
unsigned char var_22 = (unsigned char)76;
int var_23 = -2047228511;
short var_24 = (short)-29324;
unsigned char arr_2 [23] ;
int arr_8 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = 800055248;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
