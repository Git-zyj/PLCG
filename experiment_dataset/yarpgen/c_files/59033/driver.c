#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)27;
unsigned short var_2 = (unsigned short)52007;
signed char var_3 = (signed char)127;
int var_6 = -1376664501;
unsigned short var_7 = (unsigned short)49602;
unsigned short var_10 = (unsigned short)49183;
int zero = 0;
int var_11 = -530804000;
int var_12 = 1439447103;
signed char var_13 = (signed char)-95;
unsigned short var_14 = (unsigned short)2780;
long long int var_15 = 8705764793074763899LL;
_Bool arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
