#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1311800395U;
unsigned int var_5 = 2706670883U;
unsigned short var_6 = (unsigned short)48816;
unsigned char var_7 = (unsigned char)210;
unsigned char var_8 = (unsigned char)174;
int zero = 0;
int var_12 = 186921710;
signed char var_13 = (signed char)79;
unsigned char var_14 = (unsigned char)184;
int var_15 = 2009165337;
int var_16 = 1892581131;
unsigned short arr_0 [21] ;
long long int arr_1 [21] [21] ;
unsigned char arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49011 : (unsigned short)9286;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 4817738026320307157LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)255;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
