#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4067;
signed char var_7 = (signed char)-121;
unsigned int var_11 = 406307763U;
signed char var_16 = (signed char)49;
int zero = 0;
int var_20 = -846223580;
unsigned char var_21 = (unsigned char)167;
unsigned char var_22 = (unsigned char)41;
unsigned char var_23 = (unsigned char)207;
unsigned char var_24 = (unsigned char)89;
short var_25 = (short)27918;
unsigned char var_26 = (unsigned char)170;
signed char arr_0 [13] ;
unsigned short arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)41091;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
