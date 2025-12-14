#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)182;
unsigned int var_4 = 1300927041U;
unsigned char var_5 = (unsigned char)191;
long long int var_8 = -4391252909224596600LL;
int var_12 = -1303856533;
int var_15 = 884946933;
unsigned int var_16 = 2324038892U;
long long int var_17 = -5966034799440061032LL;
int zero = 0;
unsigned int var_20 = 744148538U;
int var_21 = 937368814;
short var_22 = (short)-20413;
unsigned short var_23 = (unsigned short)2331;
unsigned long long int var_24 = 5051545010357096706ULL;
long long int var_25 = 9006026642732681329LL;
int var_26 = 1253996130;
int var_27 = 653009865;
signed char arr_0 [19] [19] ;
unsigned short arr_1 [19] ;
unsigned char arr_3 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)41292;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)234;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
