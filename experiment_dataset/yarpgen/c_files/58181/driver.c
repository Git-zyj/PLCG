#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6862293431468956625LL;
unsigned char var_5 = (unsigned char)253;
unsigned short var_7 = (unsigned short)30250;
long long int var_8 = 7882467701790060462LL;
signed char var_10 = (signed char)-92;
int zero = 0;
unsigned char var_12 = (unsigned char)29;
signed char var_13 = (signed char)54;
unsigned char var_14 = (unsigned char)224;
signed char var_15 = (signed char)-49;
unsigned short var_16 = (unsigned short)22040;
signed char arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-29;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
