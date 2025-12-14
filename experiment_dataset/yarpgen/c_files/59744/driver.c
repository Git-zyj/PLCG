#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
short var_1 = (short)31673;
signed char var_2 = (signed char)-47;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)148;
unsigned long long int var_5 = 8928798531530677914ULL;
long long int var_6 = -1007744360711859345LL;
unsigned char var_7 = (unsigned char)19;
short var_9 = (short)28818;
long long int var_12 = 5168818387598177409LL;
unsigned char var_14 = (unsigned char)79;
int zero = 0;
int var_15 = -1033088676;
unsigned long long int var_16 = 14557762970871790362ULL;
unsigned char var_17 = (unsigned char)120;
unsigned long long int var_18 = 7207144100698962144ULL;
unsigned int var_19 = 4220406258U;
unsigned int var_20 = 1826415618U;
long long int var_21 = -2672891217763530896LL;
unsigned char var_22 = (unsigned char)106;
short var_23 = (short)-332;
unsigned long long int var_24 = 17691054319895322919ULL;
long long int var_25 = 4108549323653539376LL;
short var_26 = (short)-7428;
signed char arr_8 [17] [17] ;
short arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)1 : (signed char)127;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)7022 : (short)2304;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
