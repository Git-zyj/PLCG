#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3041589495539350626LL;
unsigned char var_7 = (unsigned char)65;
short var_14 = (short)-19911;
int zero = 0;
long long int var_15 = -1051107737777336967LL;
unsigned int var_16 = 203262830U;
unsigned long long int var_17 = 5048196275601450530ULL;
short var_18 = (short)-23949;
unsigned int var_19 = 3106426139U;
unsigned int var_20 = 3847602208U;
unsigned short var_21 = (unsigned short)23727;
unsigned short arr_0 [17] [17] ;
unsigned char arr_2 [17] [17] ;
_Bool arr_8 [17] ;
unsigned long long int arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)47417;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 18259838707610464484ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
