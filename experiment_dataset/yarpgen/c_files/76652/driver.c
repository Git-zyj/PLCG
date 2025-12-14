#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54628;
long long int var_3 = 675738615628296733LL;
unsigned char var_5 = (unsigned char)165;
int var_8 = 2014234652;
signed char var_10 = (signed char)50;
int zero = 0;
unsigned char var_11 = (unsigned char)59;
int var_12 = -204225679;
unsigned char var_13 = (unsigned char)70;
unsigned char arr_0 [24] ;
unsigned char arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)175;
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
