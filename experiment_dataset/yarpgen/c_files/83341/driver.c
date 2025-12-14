#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59629;
int var_3 = -1790619367;
int var_6 = 1808050934;
unsigned short var_8 = (unsigned short)31400;
unsigned short var_11 = (unsigned short)49873;
unsigned short var_12 = (unsigned short)43348;
unsigned short var_13 = (unsigned short)2415;
signed char var_14 = (signed char)81;
int var_16 = 544142814;
int zero = 0;
int var_20 = 1138786610;
unsigned short var_21 = (unsigned short)31734;
unsigned short var_22 = (unsigned short)8288;
int var_23 = -570066985;
int var_24 = 1683599318;
unsigned short var_25 = (unsigned short)36091;
int arr_0 [18] ;
unsigned short arr_3 [18] [18] ;
unsigned short arr_6 [18] [18] [18] [18] ;
unsigned short arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -1420635739;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)45107;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)17377 : (unsigned short)55656;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned short)48445;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
