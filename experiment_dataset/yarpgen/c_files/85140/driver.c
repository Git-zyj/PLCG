#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)48;
unsigned char var_4 = (unsigned char)24;
signed char var_7 = (signed char)106;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 651619560U;
int zero = 0;
unsigned char var_18 = (unsigned char)129;
signed char var_19 = (signed char)-21;
signed char var_20 = (signed char)-122;
unsigned short var_21 = (unsigned short)27438;
unsigned short arr_0 [15] ;
signed char arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)40799 : (unsigned short)47909;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)121;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
