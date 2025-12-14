#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 743603102;
unsigned int var_7 = 578679735U;
long long int var_9 = 3206172511890987676LL;
long long int var_11 = -5511009525072465256LL;
unsigned short var_14 = (unsigned short)11855;
unsigned char var_15 = (unsigned char)182;
unsigned int var_16 = 1445545184U;
unsigned char var_17 = (unsigned char)160;
int zero = 0;
signed char var_19 = (signed char)-73;
signed char var_20 = (signed char)-105;
short var_21 = (short)-25667;
short var_22 = (short)5114;
long long int arr_0 [16] ;
short arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -6922448242357873887LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-25484;
}

void checksum() {
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
