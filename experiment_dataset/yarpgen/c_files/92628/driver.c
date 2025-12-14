#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58903;
unsigned short var_2 = (unsigned short)16846;
unsigned short var_3 = (unsigned short)45091;
unsigned int var_4 = 2200470665U;
unsigned long long int var_6 = 6314266684202532528ULL;
unsigned short var_7 = (unsigned short)23132;
unsigned short var_8 = (unsigned short)25308;
unsigned char var_10 = (unsigned char)126;
int zero = 0;
int var_11 = -863732852;
signed char var_12 = (signed char)42;
short var_13 = (short)27353;
unsigned int var_14 = 2727973956U;
unsigned char var_15 = (unsigned char)234;
unsigned int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 2248550597U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
