#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 883201692;
signed char var_6 = (signed char)-65;
unsigned char var_7 = (unsigned char)34;
unsigned char var_8 = (unsigned char)203;
short var_9 = (short)14472;
unsigned char var_10 = (unsigned char)5;
unsigned char var_11 = (unsigned char)24;
unsigned char var_16 = (unsigned char)111;
int zero = 0;
unsigned char var_17 = (unsigned char)155;
unsigned long long int arr_4 [11] ;
unsigned short arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 18079479911273109632ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)10141;
}

void checksum() {
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
