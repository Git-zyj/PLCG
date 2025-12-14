#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)104;
signed char var_2 = (signed char)-94;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)169;
unsigned char var_5 = (unsigned char)48;
signed char var_6 = (signed char)-79;
short var_7 = (short)-7470;
signed char var_9 = (signed char)-90;
signed char var_11 = (signed char)-32;
int zero = 0;
signed char var_12 = (signed char)-46;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 823059574U;
signed char var_15 = (signed char)119;
long long int var_16 = -9191676886074850183LL;
unsigned int var_17 = 4280740264U;
int var_18 = 1813797580;
unsigned int arr_0 [11] ;
unsigned char arr_1 [11] ;
signed char arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 3849605452U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)-123;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
