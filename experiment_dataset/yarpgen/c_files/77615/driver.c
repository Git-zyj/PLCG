#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)14458;
unsigned long long int var_5 = 4609735025868709935ULL;
unsigned char var_6 = (unsigned char)211;
long long int var_8 = 2118729701435193515LL;
short var_17 = (short)28362;
int zero = 0;
short var_19 = (short)-31914;
unsigned char var_20 = (unsigned char)249;
signed char var_21 = (signed char)123;
unsigned char var_22 = (unsigned char)19;
short var_23 = (short)737;
unsigned char arr_0 [24] [24] ;
unsigned short arr_2 [24] ;
unsigned char arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)105 : (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)30344 : (unsigned short)61718;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned char)78;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
