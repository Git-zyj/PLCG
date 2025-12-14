#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8159670039324765024LL;
unsigned long long int var_2 = 17380606565783035745ULL;
short var_3 = (short)-32352;
long long int var_4 = 4482156193155669319LL;
unsigned char var_5 = (unsigned char)77;
long long int var_6 = -6036356660696849355LL;
int var_7 = 956167191;
signed char var_8 = (signed char)28;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-30787;
_Bool var_11 = (_Bool)1;
long long int var_12 = -6389477663154684357LL;
int zero = 0;
signed char var_13 = (signed char)81;
signed char var_14 = (signed char)49;
unsigned short var_15 = (unsigned short)20514;
unsigned int var_16 = 3737571032U;
short var_17 = (short)-30955;
int var_18 = 1036299988;
unsigned char var_19 = (unsigned char)226;
short var_20 = (short)16046;
short arr_3 [12] ;
unsigned short arr_4 [12] ;
unsigned short arr_15 [13] [13] [13] ;
short arr_16 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)-15486;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)30610;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)35381;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (short)-27070;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
