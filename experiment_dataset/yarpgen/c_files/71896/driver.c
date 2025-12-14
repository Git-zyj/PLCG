#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1070491305694524098LL;
unsigned long long int var_1 = 5801975681580378027ULL;
long long int var_2 = 4270194038858144642LL;
unsigned short var_3 = (unsigned short)46079;
unsigned short var_4 = (unsigned short)62239;
unsigned short var_5 = (unsigned short)10222;
long long int var_6 = 7138050841764355127LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 15616501830324424320ULL;
short var_9 = (short)19039;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)12;
signed char var_14 = (signed char)52;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)27293;
_Bool var_17 = (_Bool)0;
_Bool arr_5 [15] [15] [15] ;
long long int arr_7 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1751574524962248429LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
