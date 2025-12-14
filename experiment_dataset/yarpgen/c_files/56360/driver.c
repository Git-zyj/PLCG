#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
unsigned int var_2 = 3750836642U;
unsigned char var_3 = (unsigned char)55;
unsigned short var_4 = (unsigned short)52141;
signed char var_5 = (signed char)-64;
unsigned char var_8 = (unsigned char)41;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-76;
signed char var_12 = (signed char)98;
signed char var_13 = (signed char)-81;
unsigned int var_14 = 3650557834U;
short var_15 = (short)-8919;
unsigned char arr_6 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)152;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
