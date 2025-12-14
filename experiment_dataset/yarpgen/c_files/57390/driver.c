#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -779621261;
unsigned short var_4 = (unsigned short)14800;
unsigned char var_9 = (unsigned char)175;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-20771;
int var_12 = -953312586;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 531165026752848780ULL;
long long int var_18 = 4573572561084958197LL;
short var_19 = (short)-23129;
long long int var_20 = -5666982985798913134LL;
unsigned int var_21 = 2023496572U;
long long int arr_3 [16] ;
unsigned short arr_4 [16] [16] [16] ;
unsigned int arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -98717336431355679LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)22326;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 3595409416U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
