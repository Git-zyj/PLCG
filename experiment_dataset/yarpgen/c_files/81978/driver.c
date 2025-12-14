#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
unsigned long long int var_3 = 16180565506648814929ULL;
unsigned short var_5 = (unsigned short)43875;
unsigned short var_6 = (unsigned short)2537;
long long int var_9 = 3788247693950936431LL;
int var_11 = 79322888;
int zero = 0;
long long int var_12 = -2227733876750462843LL;
unsigned long long int var_13 = 14887737246797955858ULL;
signed char var_14 = (signed char)21;
_Bool arr_0 [24] ;
short arr_1 [24] ;
long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)12953;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1707858733814798492LL : -7433310383753141347LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
