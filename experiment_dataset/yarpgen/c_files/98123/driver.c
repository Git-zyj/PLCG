#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1928852112U;
signed char var_5 = (signed char)-18;
unsigned int var_6 = 2428120696U;
unsigned short var_7 = (unsigned short)40633;
unsigned short var_13 = (unsigned short)46353;
int var_15 = 429617156;
int zero = 0;
int var_16 = 1515334364;
unsigned char var_17 = (unsigned char)243;
short var_18 = (short)-7483;
unsigned short var_19 = (unsigned short)48402;
int var_20 = 526809617;
int arr_0 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1366951183 : -266509696;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
