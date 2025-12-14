#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4632;
unsigned long long int var_2 = 12066995063292740955ULL;
unsigned int var_3 = 6952301U;
unsigned char var_6 = (unsigned char)224;
unsigned int var_9 = 1198794027U;
unsigned char var_12 = (unsigned char)197;
int zero = 0;
unsigned long long int var_17 = 2562608120057688858ULL;
int var_18 = 1447374179;
short var_19 = (short)6524;
unsigned long long int var_20 = 10423908846650529845ULL;
unsigned char var_21 = (unsigned char)186;
unsigned char var_22 = (unsigned char)117;
long long int arr_0 [23] [23] ;
int arr_1 [23] ;
short arr_4 [23] ;
unsigned long long int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -2850566471963642700LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1238322086;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)19418;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 14522958809342639007ULL : 11428332296925627771ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
