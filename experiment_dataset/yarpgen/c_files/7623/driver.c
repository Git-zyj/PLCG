#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-61;
int var_2 = -810685016;
unsigned long long int var_4 = 4013215408990527037ULL;
int var_5 = -249024669;
unsigned char var_7 = (unsigned char)187;
int var_12 = 1260824378;
int var_13 = 287602656;
long long int var_14 = 3668255128292075212LL;
int zero = 0;
unsigned short var_16 = (unsigned short)48093;
unsigned short var_17 = (unsigned short)44735;
unsigned long long int var_18 = 2603138532711959960ULL;
unsigned short var_19 = (unsigned short)15775;
int var_20 = 1684359462;
int var_21 = -1303592826;
unsigned short arr_1 [16] ;
unsigned short arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)45760;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)42791;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
