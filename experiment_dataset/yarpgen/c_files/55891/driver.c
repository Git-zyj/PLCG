#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26318;
unsigned char var_1 = (unsigned char)85;
long long int var_2 = 1934366411611701502LL;
unsigned char var_3 = (unsigned char)180;
short var_4 = (short)-21140;
unsigned char var_5 = (unsigned char)88;
int var_7 = 572346026;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_11 = 817316373;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)3295;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-57;
unsigned int var_16 = 4207588398U;
unsigned int arr_0 [25] ;
int arr_1 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 2445231306U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 1216235190 : -696797546;
}

void checksum() {
    hash(&seed, var_11);
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
