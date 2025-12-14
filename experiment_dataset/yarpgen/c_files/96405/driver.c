#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
unsigned short var_4 = (unsigned short)63161;
unsigned short var_6 = (unsigned short)4184;
int var_7 = 1795993429;
long long int var_9 = 4633733422981389155LL;
unsigned long long int var_13 = 14917237758339154506ULL;
unsigned char var_15 = (unsigned char)215;
unsigned short var_16 = (unsigned short)17646;
unsigned char var_17 = (unsigned char)249;
int zero = 0;
unsigned int var_19 = 2036944003U;
signed char var_20 = (signed char)-59;
long long int var_21 = 5609469602230142790LL;
long long int var_22 = 2399609609676464304LL;
unsigned short var_23 = (unsigned short)15416;
short var_24 = (short)-22965;
int var_25 = -1825887172;
unsigned char var_26 = (unsigned char)25;
signed char var_27 = (signed char)-86;
unsigned char arr_1 [15] ;
int arr_2 [14] ;
unsigned short arr_3 [14] ;
unsigned long long int arr_10 [10] ;
unsigned char arr_8 [11] ;
unsigned char arr_12 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -1104762388;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)7192;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 14665026327444456162ULL : 3292720302021935764ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)230 : (unsigned char)40;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
