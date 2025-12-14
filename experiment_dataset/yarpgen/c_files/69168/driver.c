#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14205;
int var_1 = -1880523208;
unsigned short var_2 = (unsigned short)19023;
short var_4 = (short)-24057;
unsigned char var_6 = (unsigned char)193;
unsigned char var_10 = (unsigned char)25;
short var_11 = (short)25924;
long long int var_12 = -6767517825638611677LL;
unsigned char var_13 = (unsigned char)56;
int zero = 0;
unsigned char var_14 = (unsigned char)30;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 4188493210U;
int var_17 = 748213534;
int var_18 = -755543054;
unsigned char var_19 = (unsigned char)105;
int arr_7 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -1360325221 : 1211998304;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
