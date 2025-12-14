#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56886;
unsigned int var_3 = 2451830398U;
short var_4 = (short)2613;
unsigned long long int var_6 = 16443308117413422356ULL;
short var_7 = (short)9796;
unsigned char var_8 = (unsigned char)166;
short var_9 = (short)10976;
int zero = 0;
unsigned int var_10 = 4057296200U;
unsigned short var_11 = (unsigned short)49936;
short var_12 = (short)-20858;
int var_13 = 1919680633;
long long int var_14 = -3885840056329652295LL;
unsigned short var_15 = (unsigned short)61965;
long long int var_16 = -6882611949418952166LL;
long long int var_17 = -867646021883883570LL;
unsigned char arr_5 [22] [22] [22] ;
unsigned int arr_12 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 4107957327U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
