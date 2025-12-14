#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1236484807U;
long long int var_2 = 3431983427557655410LL;
signed char var_4 = (signed char)-103;
int var_5 = -1945501494;
unsigned char var_8 = (unsigned char)114;
unsigned char var_9 = (unsigned char)157;
unsigned int var_10 = 1458846538U;
int zero = 0;
signed char var_14 = (signed char)46;
long long int var_15 = -8349605427677544809LL;
unsigned int var_16 = 2165891451U;
signed char var_17 = (signed char)2;
int var_18 = -7296082;
int arr_0 [16] ;
short arr_1 [16] [16] ;
signed char arr_3 [16] ;
signed char arr_4 [16] [16] [16] ;
long long int arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -798576599;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-9277;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 366095586626524108LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
