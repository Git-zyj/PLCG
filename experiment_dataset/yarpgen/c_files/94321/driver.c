#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)78;
short var_2 = (short)21682;
int var_4 = 217101716;
unsigned short var_5 = (unsigned short)4125;
unsigned int var_6 = 1973388979U;
unsigned short var_7 = (unsigned short)4933;
long long int var_8 = 6507674301747834062LL;
short var_13 = (short)3607;
int zero = 0;
short var_15 = (short)-26857;
signed char var_16 = (signed char)-73;
unsigned int var_17 = 1383696113U;
unsigned short var_18 = (unsigned short)61423;
signed char var_19 = (signed char)57;
unsigned char arr_1 [12] ;
short arr_4 [12] [12] ;
unsigned int arr_7 [12] [12] ;
unsigned char arr_8 [12] [12] [12] ;
long long int arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)21308 : (short)-31817;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 1692654841U : 1814940202U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 3636523455854868234LL : -1909111163395247027LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
