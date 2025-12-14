#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2065343123;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-4882;
short var_6 = (short)16099;
unsigned char var_7 = (unsigned char)74;
int var_8 = -1727191118;
int var_9 = 1360008277;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 14741080721450222133ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 1771703677449833056ULL;
unsigned int var_14 = 521655993U;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-671;
unsigned int var_17 = 3033884512U;
unsigned short var_18 = (unsigned short)24636;
unsigned char var_19 = (unsigned char)103;
unsigned short var_20 = (unsigned short)56435;
_Bool var_21 = (_Bool)1;
short var_22 = (short)6092;
unsigned long long int var_23 = 10519997623277511496ULL;
signed char var_24 = (signed char)41;
signed char arr_4 [15] [15] ;
unsigned long long int arr_17 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = 2167046481053810595ULL;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
