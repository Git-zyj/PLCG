#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)153;
int var_2 = -1145865256;
unsigned char var_3 = (unsigned char)14;
int var_4 = -472573419;
short var_8 = (short)26468;
int zero = 0;
unsigned long long int var_11 = 16560183078540728904ULL;
short var_12 = (short)-279;
signed char var_13 = (signed char)46;
long long int var_14 = -8758373860294872386LL;
short var_15 = (short)-16885;
unsigned int var_16 = 742618529U;
int var_17 = 1056854829;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)27664;
_Bool var_20 = (_Bool)1;
unsigned short arr_1 [21] [21] ;
short arr_2 [21] [21] ;
unsigned short arr_4 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)19726;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-1994;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)32278;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
