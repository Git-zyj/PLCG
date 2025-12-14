#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)61383;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-20154;
signed char var_8 = (signed char)55;
int zero = 0;
unsigned char var_10 = (unsigned char)178;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)17;
unsigned char var_13 = (unsigned char)85;
signed char var_14 = (signed char)-123;
unsigned char arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)4 : (unsigned char)128;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
