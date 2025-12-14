#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-20;
long long int var_1 = 4442573649848238274LL;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 648610759U;
unsigned long long int var_11 = 11772332300589173528ULL;
short var_12 = (short)27006;
unsigned char var_13 = (unsigned char)86;
int zero = 0;
unsigned long long int var_15 = 6591199462299970703ULL;
short var_16 = (short)22317;
unsigned short var_17 = (unsigned short)30713;
unsigned int var_18 = 1830471546U;
unsigned int var_19 = 223826470U;
short var_20 = (short)3700;
unsigned short arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)18839;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
