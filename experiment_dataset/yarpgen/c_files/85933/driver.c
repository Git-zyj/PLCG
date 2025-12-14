#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)48;
unsigned char var_3 = (unsigned char)105;
int var_4 = -1810666090;
short var_6 = (short)5766;
unsigned long long int var_7 = 13302371182593606094ULL;
short var_8 = (short)-11194;
unsigned int var_10 = 81800671U;
unsigned char var_11 = (unsigned char)46;
unsigned long long int var_12 = 8525008011209382011ULL;
unsigned int var_13 = 1071853209U;
short var_14 = (short)-23134;
short var_15 = (short)-23700;
int zero = 0;
signed char var_16 = (signed char)88;
unsigned int var_17 = 1352569403U;
signed char var_18 = (signed char)-111;
unsigned char var_19 = (unsigned char)241;
unsigned char var_20 = (unsigned char)79;
unsigned int var_21 = 291518U;
unsigned long long int var_22 = 10176386874868395414ULL;
int var_23 = -256497770;
unsigned int var_24 = 1357366028U;
signed char var_25 = (signed char)81;
unsigned char arr_11 [21] ;
unsigned long long int arr_20 [21] ;
int arr_21 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)231 : (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 14248404317278369301ULL : 5572732503245161662ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 377234205 : 1202810514;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
