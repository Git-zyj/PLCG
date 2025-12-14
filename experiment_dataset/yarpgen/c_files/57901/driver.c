#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6869771888222806788ULL;
int var_1 = -853266396;
signed char var_7 = (signed char)119;
short var_11 = (short)2144;
unsigned short var_12 = (unsigned short)25038;
long long int var_16 = 219531428585890496LL;
int zero = 0;
unsigned short var_19 = (unsigned short)4130;
short var_20 = (short)17624;
unsigned long long int var_21 = 839161256102230829ULL;
unsigned int var_22 = 444450898U;
long long int var_23 = 1291265161139442719LL;
short var_24 = (short)-4631;
unsigned short var_25 = (unsigned short)295;
int arr_1 [25] [25] ;
unsigned long long int arr_3 [25] ;
_Bool arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 1001385854;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 6450685344297084563ULL : 13192351146403814358ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
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
