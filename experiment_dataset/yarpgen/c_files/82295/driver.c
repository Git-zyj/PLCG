#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56979;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)119;
unsigned char var_4 = (unsigned char)60;
unsigned int var_7 = 1037187250U;
unsigned int var_8 = 2822406690U;
int var_12 = 438332061;
unsigned long long int var_13 = 16359536722418322315ULL;
short var_15 = (short)9493;
int zero = 0;
unsigned int var_19 = 3556857578U;
unsigned long long int var_20 = 1748897701440868448ULL;
unsigned char var_21 = (unsigned char)248;
signed char var_22 = (signed char)107;
signed char var_23 = (signed char)-22;
unsigned short var_24 = (unsigned short)35565;
long long int arr_0 [25] ;
unsigned long long int arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3269836416785604116LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 1915403464777285767ULL : 14246797284494559744ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
