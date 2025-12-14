#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1786078590;
unsigned long long int var_9 = 18212413067137737355ULL;
unsigned short var_10 = (unsigned short)33607;
signed char var_12 = (signed char)120;
int var_13 = 1846605285;
signed char var_14 = (signed char)-61;
unsigned short var_16 = (unsigned short)47629;
unsigned long long int var_17 = 14889941723497487809ULL;
int zero = 0;
int var_18 = -889204077;
signed char var_19 = (signed char)-19;
int var_20 = -339726699;
int var_21 = 1052389735;
unsigned int var_22 = 2299701148U;
unsigned short var_23 = (unsigned short)9915;
unsigned short arr_4 [20] ;
short arr_7 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned short)32740;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)2159;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
