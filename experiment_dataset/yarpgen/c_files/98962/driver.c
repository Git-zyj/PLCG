#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2148789851400668206LL;
long long int var_1 = 4292463665322079132LL;
unsigned char var_2 = (unsigned char)191;
unsigned int var_4 = 1699929974U;
unsigned char var_5 = (unsigned char)176;
unsigned char var_6 = (unsigned char)111;
unsigned char var_8 = (unsigned char)106;
int zero = 0;
unsigned short var_11 = (unsigned short)15083;
signed char var_12 = (signed char)31;
int var_13 = -134161080;
unsigned char arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)207;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
