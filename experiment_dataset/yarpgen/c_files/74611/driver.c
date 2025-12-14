#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-118;
signed char var_3 = (signed char)-22;
signed char var_9 = (signed char)91;
unsigned short var_10 = (unsigned short)40871;
unsigned short var_14 = (unsigned short)18393;
int zero = 0;
unsigned short var_17 = (unsigned short)13810;
signed char var_18 = (signed char)63;
unsigned short var_19 = (unsigned short)64340;
unsigned short var_20 = (unsigned short)55297;
signed char var_21 = (signed char)17;
signed char var_22 = (signed char)-56;
unsigned short var_23 = (unsigned short)46586;
signed char var_24 = (signed char)13;
signed char var_25 = (signed char)18;
signed char var_26 = (signed char)52;
signed char arr_11 [16] [16] ;
unsigned short arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)8039;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
