#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)52;
signed char var_3 = (signed char)-25;
int var_4 = -1268024973;
unsigned int var_8 = 4237414926U;
long long int var_11 = -714990343918405016LL;
unsigned short var_12 = (unsigned short)569;
long long int var_14 = -6872280914473309768LL;
unsigned char var_15 = (unsigned char)124;
int zero = 0;
unsigned int var_16 = 1521790058U;
unsigned int var_17 = 4099246723U;
_Bool var_18 = (_Bool)1;
long long int var_19 = 1478750839729574660LL;
signed char var_20 = (signed char)-93;
unsigned char arr_0 [21] ;
unsigned short arr_1 [21] ;
short arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)27689;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-12955;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
