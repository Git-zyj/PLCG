#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)54;
unsigned char var_14 = (unsigned char)72;
unsigned char var_16 = (unsigned char)240;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 13883389790110106455ULL;
unsigned int var_20 = 4116437531U;
unsigned long long int var_21 = 9495484239997138135ULL;
_Bool var_22 = (_Bool)0;
unsigned char arr_0 [11] [11] ;
unsigned long long int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)147 : (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 195307897311161143ULL : 16183355425038584271ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
