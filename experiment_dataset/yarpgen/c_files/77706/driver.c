#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11036326398770662887ULL;
unsigned short var_3 = (unsigned short)39211;
unsigned int var_5 = 3803288440U;
unsigned long long int var_7 = 16093479586096012391ULL;
unsigned short var_9 = (unsigned short)26011;
unsigned int var_10 = 1143267655U;
unsigned short var_12 = (unsigned short)30584;
unsigned short var_16 = (unsigned short)32296;
int zero = 0;
unsigned int var_18 = 144951162U;
long long int var_19 = 3704343936659523348LL;
signed char var_20 = (signed char)45;
unsigned int var_21 = 2768352570U;
unsigned long long int var_22 = 16801691092019496064ULL;
unsigned int var_23 = 2484081128U;
signed char arr_7 [14] ;
unsigned short arr_8 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)49729;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
