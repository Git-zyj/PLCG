#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1513055354;
short var_7 = (short)-23366;
int var_9 = 1331883306;
long long int var_10 = -7260706088487849362LL;
long long int var_11 = 1842986696168774511LL;
unsigned short var_12 = (unsigned short)15669;
short var_13 = (short)-12065;
int zero = 0;
int var_14 = -1898884280;
int var_15 = -1132321116;
unsigned char var_16 = (unsigned char)255;
_Bool var_17 = (_Bool)1;
int arr_0 [25] ;
_Bool arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1021574282 : -1202421926;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
