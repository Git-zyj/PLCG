#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18299;
unsigned short var_3 = (unsigned short)41393;
unsigned short var_4 = (unsigned short)24954;
signed char var_7 = (signed char)-31;
unsigned short var_11 = (unsigned short)8190;
signed char var_12 = (signed char)-76;
int zero = 0;
short var_14 = (short)23760;
unsigned short var_15 = (unsigned short)7653;
unsigned char var_16 = (unsigned char)25;
unsigned char var_17 = (unsigned char)193;
signed char var_18 = (signed char)-2;
unsigned short arr_1 [22] ;
int arr_2 [22] [22] ;
long long int arr_4 [22] ;
int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)45297;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -1097087473 : 2097395984;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 5429331958634534393LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1993172758 : 378430255;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
