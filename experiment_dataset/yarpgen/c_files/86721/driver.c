#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24580;
unsigned char var_2 = (unsigned char)40;
_Bool var_5 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)243;
unsigned long long int var_17 = 1264518488004900550ULL;
unsigned char var_18 = (unsigned char)157;
short var_19 = (short)31722;
unsigned short var_20 = (unsigned short)10812;
unsigned char var_21 = (unsigned char)82;
signed char arr_0 [24] ;
unsigned long long int arr_3 [23] ;
_Bool arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 9259131956064271619ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
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
