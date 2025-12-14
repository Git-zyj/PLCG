#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11526967648528323273ULL;
signed char var_1 = (signed char)-49;
unsigned char var_2 = (unsigned char)53;
unsigned int var_3 = 3118101404U;
short var_5 = (short)14055;
unsigned long long int var_6 = 1366188581549154705ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)207;
unsigned long long int var_9 = 11647043464247645770ULL;
signed char var_10 = (signed char)0;
int zero = 0;
short var_11 = (short)20701;
unsigned char var_12 = (unsigned char)0;
signed char var_13 = (signed char)-18;
signed char var_14 = (signed char)-47;
signed char var_15 = (signed char)-123;
unsigned char var_16 = (unsigned char)118;
signed char arr_1 [16] ;
short arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)19201;
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
