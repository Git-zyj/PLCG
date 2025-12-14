#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28692;
unsigned short var_3 = (unsigned short)65299;
unsigned short var_4 = (unsigned short)62406;
unsigned short var_5 = (unsigned short)2134;
unsigned short var_6 = (unsigned short)64802;
unsigned short var_8 = (unsigned short)37699;
unsigned short var_10 = (unsigned short)24518;
unsigned short var_12 = (unsigned short)26469;
unsigned short var_16 = (unsigned short)19751;
int zero = 0;
unsigned short var_17 = (unsigned short)22896;
unsigned short var_18 = (unsigned short)21398;
unsigned short var_19 = (unsigned short)5787;
unsigned short var_20 = (unsigned short)42865;
unsigned short var_21 = (unsigned short)38463;
unsigned short var_22 = (unsigned short)7568;
unsigned short var_23 = (unsigned short)46522;
unsigned short var_24 = (unsigned short)61821;
unsigned short arr_0 [21] [21] ;
unsigned short arr_1 [21] ;
unsigned short arr_7 [17] [17] ;
unsigned short arr_8 [17] ;
unsigned short arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)39443;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)43702;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)15659 : (unsigned short)25824;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)8068 : (unsigned short)3748;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20643 : (unsigned short)38869;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
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
