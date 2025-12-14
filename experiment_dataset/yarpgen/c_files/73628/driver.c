#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52780;
signed char var_1 = (signed char)-88;
long long int var_2 = -6592952087096322344LL;
short var_3 = (short)-23488;
unsigned int var_5 = 573793246U;
int zero = 0;
signed char var_10 = (signed char)-12;
int var_11 = -80162853;
unsigned short var_12 = (unsigned short)13940;
signed char var_13 = (signed char)-119;
int var_14 = -2048745082;
signed char var_15 = (signed char)48;
int arr_0 [17] ;
int arr_3 [17] ;
unsigned long long int arr_7 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -678478756 : -941868925;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -2116922410;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 10404433872768033467ULL;
}

void checksum() {
    hash(&seed, var_10);
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
