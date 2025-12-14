#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-5579;
long long int var_7 = -7891379349328055245LL;
long long int var_10 = 8427068898284123748LL;
unsigned short var_11 = (unsigned short)4013;
short var_13 = (short)19534;
long long int var_14 = -4020054243046324962LL;
unsigned int var_16 = 1664926216U;
unsigned int var_17 = 1896983480U;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-56;
unsigned short var_20 = (unsigned short)21575;
short var_21 = (short)-22065;
unsigned int var_22 = 261225646U;
int var_23 = 1308575695;
signed char arr_3 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)94;
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
