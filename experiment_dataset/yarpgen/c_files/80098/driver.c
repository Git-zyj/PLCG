#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24170;
unsigned char var_1 = (unsigned char)222;
unsigned short var_2 = (unsigned short)13754;
unsigned short var_3 = (unsigned short)44249;
unsigned int var_4 = 4115110704U;
unsigned short var_5 = (unsigned short)40076;
unsigned long long int var_6 = 2939213592463653346ULL;
int var_7 = 1450180024;
unsigned short var_8 = (unsigned short)19748;
unsigned char var_10 = (unsigned char)241;
int var_11 = -650816322;
int zero = 0;
int var_12 = 308465802;
_Bool var_13 = (_Bool)0;
int var_14 = 994524350;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)13460;
long long int var_17 = -8074989383333270103LL;
long long int arr_3 [21] ;
short arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -8431902323709852292LL : -6236303971971550575LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (short)-7943;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
