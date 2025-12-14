#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2081521941;
unsigned char var_1 = (unsigned char)121;
unsigned int var_2 = 3758730563U;
int var_3 = 302874213;
long long int var_5 = -4274785847846426355LL;
unsigned char var_6 = (unsigned char)154;
unsigned short var_8 = (unsigned short)64111;
int zero = 0;
unsigned short var_10 = (unsigned short)42404;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-114;
signed char var_13 = (signed char)18;
long long int var_14 = -4745665234622344868LL;
signed char var_15 = (signed char)95;
signed char var_16 = (signed char)-113;
signed char var_17 = (signed char)34;
signed char arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)81;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
