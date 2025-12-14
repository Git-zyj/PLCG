#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51302;
unsigned long long int var_6 = 8623052000446054271ULL;
unsigned char var_7 = (unsigned char)45;
unsigned char var_9 = (unsigned char)160;
unsigned char var_13 = (unsigned char)49;
int zero = 0;
int var_17 = -643025104;
short var_18 = (short)-16504;
long long int var_19 = -3190990985814832480LL;
unsigned short var_20 = (unsigned short)63363;
int var_21 = -294202704;
unsigned char arr_0 [21] [21] ;
unsigned long long int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 14330768454992204928ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
