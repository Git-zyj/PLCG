#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)26407;
unsigned char var_7 = (unsigned char)248;
unsigned short var_10 = (unsigned short)6305;
unsigned char var_11 = (unsigned char)155;
unsigned char var_12 = (unsigned char)204;
int zero = 0;
short var_15 = (short)32730;
unsigned char var_16 = (unsigned char)16;
int var_17 = -964830655;
unsigned short var_18 = (unsigned short)22696;
unsigned char arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)151;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
