#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6468300229360962505LL;
unsigned int var_3 = 2445067454U;
int var_4 = 712935594;
int var_10 = 257448777;
unsigned int var_11 = 3014591110U;
short var_12 = (short)29756;
unsigned long long int var_14 = 14059490146589735230ULL;
int zero = 0;
long long int var_17 = 2432315555435106730LL;
long long int var_18 = 4434622492932585288LL;
short var_19 = (short)-21047;
short var_20 = (short)-13280;
unsigned int arr_0 [22] ;
signed char arr_1 [22] ;
unsigned short arr_2 [22] ;
signed char arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 927864921U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)29859;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)-88;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
