#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)249;
unsigned short var_1 = (unsigned short)901;
unsigned char var_4 = (unsigned char)117;
unsigned char var_5 = (unsigned char)119;
signed char var_6 = (signed char)64;
unsigned int var_7 = 990520376U;
int var_8 = -232679184;
unsigned short var_9 = (unsigned short)60422;
unsigned long long int var_10 = 12978748879597405285ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)2756;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)85;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 15605876022071506103ULL;
unsigned char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)6;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
