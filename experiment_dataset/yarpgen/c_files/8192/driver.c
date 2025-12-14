#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)497;
unsigned char var_2 = (unsigned char)20;
short var_5 = (short)22421;
long long int var_8 = -4964486293983620807LL;
signed char var_9 = (signed char)41;
signed char var_10 = (signed char)-57;
unsigned short var_12 = (unsigned short)178;
int zero = 0;
int var_13 = 1603279943;
unsigned char var_14 = (unsigned char)33;
long long int var_15 = 9199927401341906097LL;
signed char var_16 = (signed char)-120;
int var_17 = -430569265;
int var_18 = 961598425;
unsigned char arr_1 [22] ;
unsigned char arr_7 [22] [22] [22] ;
unsigned int arr_8 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 2067066946U;
}

void checksum() {
    hash(&seed, var_13);
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
