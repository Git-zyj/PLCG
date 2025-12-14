#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)210;
short var_4 = (short)31773;
long long int var_5 = -7198157989008604140LL;
unsigned long long int var_6 = 16736346504346602079ULL;
short var_7 = (short)21162;
short var_8 = (short)20113;
int zero = 0;
short var_10 = (short)-10351;
unsigned int var_11 = 3221994246U;
int var_12 = 1104891990;
long long int var_13 = -5700026032418891231LL;
unsigned char var_14 = (unsigned char)49;
short var_15 = (short)-1152;
short var_16 = (short)14465;
short var_17 = (short)-485;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3490105998U;
unsigned char var_20 = (unsigned char)65;
unsigned int var_21 = 3716326123U;
long long int var_22 = 513621725472642433LL;
unsigned int var_23 = 1251573355U;
int arr_10 [23] [23] [23] ;
long long int arr_17 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 858123666;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = 1363373327400404796LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
