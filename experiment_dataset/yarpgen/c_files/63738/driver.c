#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -740771050;
unsigned long long int var_2 = 13631893188614074428ULL;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-61;
short var_12 = (short)20014;
int var_15 = 563300553;
unsigned int var_18 = 2532696089U;
int zero = 0;
long long int var_19 = 3094623852916556180LL;
signed char var_20 = (signed char)-41;
short var_21 = (short)-2476;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)222;
int var_24 = -1228012734;
int var_25 = 2007856159;
unsigned char var_26 = (unsigned char)176;
unsigned int var_27 = 874802161U;
unsigned long long int arr_0 [10] [10] ;
unsigned short arr_1 [10] ;
unsigned short arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 11071291615043147578ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)52183;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)16452;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
