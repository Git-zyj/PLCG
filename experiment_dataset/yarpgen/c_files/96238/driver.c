#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29432;
unsigned char var_1 = (unsigned char)164;
short var_3 = (short)-6548;
unsigned short var_4 = (unsigned short)14939;
unsigned short var_6 = (unsigned short)42180;
_Bool var_7 = (_Bool)1;
int var_8 = -1665112785;
unsigned int var_10 = 1514807815U;
unsigned short var_11 = (unsigned short)49016;
unsigned int var_12 = 1946199055U;
long long int var_14 = 6489362231473196689LL;
unsigned short var_15 = (unsigned short)23990;
int zero = 0;
short var_16 = (short)-6465;
unsigned short var_17 = (unsigned short)30263;
signed char var_18 = (signed char)59;
short var_19 = (short)5482;
short var_20 = (short)-29892;
signed char arr_1 [17] [17] ;
signed char arr_8 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-33 : (signed char)-69;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
