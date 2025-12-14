#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11252;
unsigned char var_2 = (unsigned char)137;
unsigned short var_3 = (unsigned short)49404;
unsigned char var_4 = (unsigned char)137;
signed char var_8 = (signed char)-75;
unsigned int var_9 = 4173698108U;
unsigned int var_11 = 793654702U;
signed char var_12 = (signed char)-81;
short var_13 = (short)-4175;
long long int var_14 = 4353195217430847426LL;
int zero = 0;
short var_15 = (short)-26436;
int var_16 = 1659514999;
unsigned short var_17 = (unsigned short)37029;
int arr_0 [12] [12] ;
unsigned char arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 1986132954;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)225;
}

void checksum() {
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
