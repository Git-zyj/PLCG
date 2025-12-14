#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18330;
int var_1 = -626196978;
long long int var_2 = -2273498658306187021LL;
short var_5 = (short)-19797;
unsigned short var_7 = (unsigned short)3284;
signed char var_9 = (signed char)124;
unsigned short var_10 = (unsigned short)52154;
unsigned short var_11 = (unsigned short)21293;
unsigned char var_12 = (unsigned char)127;
int var_13 = 17525091;
long long int var_16 = 8379487266919976221LL;
unsigned int var_18 = 1781053661U;
short var_19 = (short)-15985;
int zero = 0;
unsigned char var_20 = (unsigned char)226;
unsigned short var_21 = (unsigned short)20046;
unsigned long long int var_22 = 8237252785507365907ULL;
unsigned short var_23 = (unsigned short)28721;
int var_24 = 508696086;
long long int var_25 = -2940193248171463627LL;
long long int arr_2 [14] [14] ;
int arr_3 [14] [14] [14] ;
long long int arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 9011550472337730633LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 128174688 : 756893235;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 8326958313710337883LL : -3254351015874650536LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
