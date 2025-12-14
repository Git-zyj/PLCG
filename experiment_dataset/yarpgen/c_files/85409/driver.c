#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 2966367638U;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)184;
short var_6 = (short)-19682;
int var_7 = -351518629;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 2465353980381601275ULL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)51;
signed char var_16 = (signed char)106;
unsigned long long int arr_0 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 15793591546451695925ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
