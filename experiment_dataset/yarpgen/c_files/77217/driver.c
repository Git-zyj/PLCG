#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5255684848940465493ULL;
unsigned long long int var_2 = 12453776832220231607ULL;
int var_8 = 592505398;
long long int var_9 = -3822471503703860768LL;
unsigned long long int var_10 = 1283436763152570479ULL;
unsigned char var_12 = (unsigned char)115;
signed char var_15 = (signed char)65;
signed char var_16 = (signed char)28;
int zero = 0;
short var_17 = (short)10315;
signed char var_18 = (signed char)60;
unsigned int var_19 = 3212594620U;
signed char var_20 = (signed char)108;
unsigned char var_21 = (unsigned char)204;
unsigned short arr_0 [16] [16] ;
short arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)59324;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-24640;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
