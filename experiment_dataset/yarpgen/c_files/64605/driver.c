#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 960587061U;
long long int var_2 = -8794558907665043664LL;
short var_3 = (short)22837;
unsigned int var_5 = 2502649514U;
unsigned long long int var_6 = 17046241044384320869ULL;
unsigned short var_10 = (unsigned short)48189;
int zero = 0;
unsigned int var_13 = 2733438792U;
short var_14 = (short)-10198;
short var_15 = (short)-5328;
unsigned char var_16 = (unsigned char)47;
unsigned long long int var_17 = 1472718659037699040ULL;
unsigned short arr_4 [22] [22] ;
signed char arr_11 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)49018;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)28;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
