#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 7685355006198110971ULL;
unsigned char var_2 = (unsigned char)13;
unsigned long long int var_8 = 1508448464077272480ULL;
int var_9 = 1657050600;
signed char var_10 = (signed char)-104;
signed char var_11 = (signed char)-103;
long long int var_12 = -5058848305205960527LL;
unsigned char var_15 = (unsigned char)139;
int var_16 = 204340763;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = 6172146848581201670LL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-17448;
unsigned char var_23 = (unsigned char)238;
unsigned int var_24 = 3099887762U;
unsigned int var_25 = 3159955274U;
_Bool var_26 = (_Bool)1;
int arr_0 [15] [15] ;
_Bool arr_1 [15] ;
signed char arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 2024044191;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)28;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
