#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)254;
unsigned long long int var_6 = 14155052421076754866ULL;
signed char var_8 = (signed char)-93;
_Bool var_9 = (_Bool)1;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)2;
int zero = 0;
signed char var_19 = (signed char)-32;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 4780517120994439605ULL;
unsigned short arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)18823;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
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
