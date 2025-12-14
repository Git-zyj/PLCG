#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2335254145214424104LL;
unsigned short var_1 = (unsigned short)33049;
short var_2 = (short)730;
unsigned char var_3 = (unsigned char)58;
signed char var_4 = (signed char)105;
int var_6 = 393367042;
short var_7 = (short)-14230;
unsigned short var_8 = (unsigned short)46111;
long long int var_11 = 8784455335657541571LL;
unsigned int var_14 = 668268448U;
int zero = 0;
int var_15 = -1254221242;
signed char var_16 = (signed char)-52;
unsigned int var_17 = 1506459022U;
signed char var_18 = (signed char)-21;
int var_19 = -843479136;
short arr_2 [15] [15] ;
unsigned long long int arr_4 [15] [15] [15] ;
unsigned int arr_5 [15] ;
unsigned int arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (short)2942;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 5501218835999042706ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 1972191468U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 2336674021U : 1126952360U;
}

void checksum() {
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
