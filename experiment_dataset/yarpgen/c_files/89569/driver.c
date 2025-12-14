#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned char var_13 = (unsigned char)194;
int var_14 = -1499399179;
unsigned long long int var_15 = 15622653813429834457ULL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)52258;
short var_18 = (short)14054;
unsigned char var_19 = (unsigned char)33;
unsigned int var_20 = 825492181U;
unsigned short var_21 = (unsigned short)42948;
unsigned short var_22 = (unsigned short)27959;
long long int var_23 = 1038444673326488765LL;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 7130913062689952784ULL;
int var_26 = -1471013348;
unsigned short var_27 = (unsigned short)22387;
unsigned short var_28 = (unsigned short)42677;
unsigned char var_29 = (unsigned char)68;
signed char var_30 = (signed char)-3;
signed char arr_3 [24] ;
unsigned short arr_23 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = (unsigned short)37242;
}

void checksum() {
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
