#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-24;
int var_1 = -426537363;
signed char var_3 = (signed char)42;
unsigned short var_5 = (unsigned short)5556;
unsigned char var_11 = (unsigned char)53;
int var_12 = -265894407;
int zero = 0;
int var_15 = 1693812092;
signed char var_16 = (signed char)127;
signed char var_17 = (signed char)106;
unsigned int arr_2 [14] [14] ;
unsigned short arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 1307944954U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)23437;
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
