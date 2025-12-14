#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6379370569457862938ULL;
int var_2 = 265013348;
short var_5 = (short)-9978;
unsigned int var_9 = 3904840442U;
int zero = 0;
unsigned short var_13 = (unsigned short)63043;
short var_14 = (short)12218;
unsigned char var_15 = (unsigned char)133;
short var_16 = (short)-25948;
unsigned short var_17 = (unsigned short)13019;
int arr_0 [22] ;
unsigned char arr_2 [22] ;
unsigned short arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -1556057363;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)44792;
}

void checksum() {
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
