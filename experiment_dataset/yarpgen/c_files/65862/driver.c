#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-24;
unsigned int var_4 = 3766389160U;
signed char var_7 = (signed char)-38;
unsigned char var_10 = (unsigned char)97;
long long int var_11 = 5469192403158584155LL;
unsigned char var_13 = (unsigned char)133;
int zero = 0;
unsigned long long int var_14 = 15192301787751773086ULL;
unsigned long long int var_15 = 10827952134498111559ULL;
signed char var_16 = (signed char)-107;
unsigned short var_17 = (unsigned short)15633;
unsigned short var_18 = (unsigned short)27593;
_Bool arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
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
