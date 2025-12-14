#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19065;
unsigned short var_1 = (unsigned short)66;
long long int var_2 = 2869404944622600589LL;
unsigned char var_3 = (unsigned char)151;
short var_4 = (short)30543;
unsigned char var_5 = (unsigned char)36;
unsigned short var_6 = (unsigned short)43201;
short var_7 = (short)4812;
short var_8 = (short)-10464;
unsigned char var_9 = (unsigned char)63;
short var_11 = (short)15577;
unsigned short var_15 = (unsigned short)20258;
int zero = 0;
unsigned char var_17 = (unsigned char)20;
long long int var_18 = -1748544030719386055LL;
unsigned short var_19 = (unsigned short)45301;
short var_20 = (short)-11040;
short var_21 = (short)-20372;
unsigned char var_22 = (unsigned char)82;
unsigned short var_23 = (unsigned short)50119;
long long int var_24 = -7500933311770583726LL;
unsigned int arr_4 [13] [13] ;
int arr_8 [13] [13] [13] ;
short arr_10 [13] [13] ;
unsigned short arr_11 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 2891533259U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1352546191;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-14764;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned short)64475;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
