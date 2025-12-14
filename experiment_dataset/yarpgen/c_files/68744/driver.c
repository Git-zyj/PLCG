#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1074772471;
signed char var_1 = (signed char)4;
int var_6 = -874652634;
int var_8 = 1823382899;
int var_9 = 117880142;
short var_10 = (short)24527;
short var_11 = (short)25291;
unsigned short var_12 = (unsigned short)64027;
int zero = 0;
unsigned short var_14 = (unsigned short)56917;
unsigned char var_15 = (unsigned char)45;
int var_16 = -1638163738;
unsigned long long int var_17 = 16383100935954073048ULL;
signed char var_18 = (signed char)78;
unsigned int var_19 = 1017894904U;
signed char arr_0 [21] ;
_Bool arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-41 : (signed char)-122;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
