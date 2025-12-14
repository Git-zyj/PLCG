#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)144;
signed char var_2 = (signed char)(-127 - 1);
short var_13 = (short)-25585;
int zero = 0;
unsigned short var_14 = (unsigned short)63532;
unsigned char var_15 = (unsigned char)98;
int var_16 = 1470104406;
unsigned char var_17 = (unsigned char)164;
int var_18 = -1348759746;
signed char var_19 = (signed char)-90;
unsigned char var_20 = (unsigned char)20;
short arr_0 [17] ;
unsigned short arr_1 [17] ;
int arr_5 [10] ;
short arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)4281;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)10993;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 826195884 : -1999523082;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)30438 : (short)-6422;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
