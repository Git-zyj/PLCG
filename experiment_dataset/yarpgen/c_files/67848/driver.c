#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2026667167532540870ULL;
unsigned char var_6 = (unsigned char)147;
int var_12 = -1904489330;
int zero = 0;
unsigned short var_13 = (unsigned short)3217;
unsigned char var_14 = (unsigned char)208;
int var_15 = -52919613;
int var_16 = 1512115335;
unsigned short var_17 = (unsigned short)23567;
unsigned long long int var_18 = 13276179082137387505ULL;
unsigned short var_19 = (unsigned short)23515;
short arr_1 [21] ;
short arr_2 [21] [21] ;
unsigned short arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-9264;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-22182;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)30932 : (unsigned short)34511;
}

void checksum() {
    hash(&seed, var_13);
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
