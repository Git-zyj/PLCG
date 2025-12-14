#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1439464502236204964ULL;
long long int var_2 = 6140832671000567313LL;
unsigned short var_4 = (unsigned short)15640;
unsigned char var_6 = (unsigned char)72;
unsigned int var_7 = 2419010999U;
signed char var_10 = (signed char)15;
signed char var_11 = (signed char)27;
unsigned char var_13 = (unsigned char)184;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_19 = (short)-25941;
_Bool var_20 = (_Bool)1;
short var_21 = (short)17889;
unsigned short var_22 = (unsigned short)32929;
int var_23 = 1277205166;
unsigned int var_24 = 205211831U;
unsigned int arr_1 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 1351148650U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
