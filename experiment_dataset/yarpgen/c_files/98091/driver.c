#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57426;
long long int var_1 = 9218474666235039425LL;
int var_3 = 1911282810;
long long int var_4 = 5695496202601267049LL;
short var_5 = (short)-2776;
signed char var_8 = (signed char)4;
int zero = 0;
unsigned short var_11 = (unsigned short)61169;
unsigned long long int var_12 = 1535561627202168474ULL;
unsigned long long int var_13 = 4477767814138784249ULL;
signed char var_14 = (signed char)92;
unsigned char var_15 = (unsigned char)205;
unsigned long long int arr_0 [14] ;
short arr_1 [14] ;
long long int arr_2 [14] ;
unsigned short arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 6430814332082510899ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)-10637;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 6671122885451232837LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)17626;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
