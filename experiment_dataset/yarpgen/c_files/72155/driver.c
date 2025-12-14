#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)100;
unsigned int var_6 = 211723033U;
long long int var_8 = -7729096138163098426LL;
short var_11 = (short)6766;
signed char var_12 = (signed char)95;
unsigned char var_13 = (unsigned char)120;
int zero = 0;
unsigned long long int var_14 = 16461756987081536216ULL;
short var_15 = (short)-24696;
long long int var_16 = -6513168190747957101LL;
unsigned short var_17 = (unsigned short)4576;
short var_18 = (short)-6059;
int var_19 = -708595627;
unsigned short var_20 = (unsigned short)23311;
long long int arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = 5378363550790474670LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
