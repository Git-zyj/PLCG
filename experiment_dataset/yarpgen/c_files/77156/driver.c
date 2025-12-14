#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-22789;
unsigned short var_6 = (unsigned short)18133;
unsigned char var_8 = (unsigned char)173;
signed char var_9 = (signed char)32;
unsigned long long int var_10 = 5481642109654566785ULL;
unsigned long long int var_11 = 11159045213900719989ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)132;
unsigned long long int var_15 = 4515953788611562392ULL;
short var_16 = (short)23752;
short var_17 = (short)-30450;
signed char var_18 = (signed char)119;
unsigned char var_19 = (unsigned char)93;
signed char var_20 = (signed char)-32;
unsigned char var_21 = (unsigned char)216;
signed char var_22 = (signed char)123;
unsigned short arr_1 [20] ;
unsigned short arr_11 [20] [20] [20] [20] [20] ;
unsigned char arr_6 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)22063;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)1088;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)100 : (unsigned char)58;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
