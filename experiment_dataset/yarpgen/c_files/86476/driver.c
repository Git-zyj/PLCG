#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-83;
unsigned long long int var_4 = 11830609548802569256ULL;
unsigned int var_5 = 1149047234U;
unsigned short var_6 = (unsigned short)4421;
unsigned short var_8 = (unsigned short)3008;
short var_10 = (short)11798;
unsigned int var_12 = 1720520501U;
unsigned int var_13 = 2548821849U;
int zero = 0;
signed char var_17 = (signed char)-20;
unsigned short var_18 = (unsigned short)54736;
unsigned long long int var_19 = 3380914401847971035ULL;
short var_20 = (short)-17860;
unsigned long long int var_21 = 3512340458124044168ULL;
signed char var_22 = (signed char)-112;
short arr_0 [21] ;
short arr_2 [21] ;
unsigned int arr_7 [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)14710;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)5408;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 2411577097U;
}

void checksum() {
    hash(&seed, var_17);
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
