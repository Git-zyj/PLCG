#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58948;
unsigned int var_1 = 2180081542U;
short var_3 = (short)-20552;
unsigned short var_8 = (unsigned short)29289;
unsigned short var_14 = (unsigned short)23706;
unsigned char var_16 = (unsigned char)186;
unsigned short var_19 = (unsigned short)19312;
int zero = 0;
unsigned char var_20 = (unsigned char)60;
unsigned char var_21 = (unsigned char)192;
unsigned int var_22 = 837015631U;
unsigned short var_23 = (unsigned short)37436;
unsigned int var_24 = 1531315897U;
short var_25 = (short)-26089;
unsigned char arr_1 [20] ;
unsigned char arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned char)43;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
