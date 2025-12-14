#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15784;
unsigned int var_2 = 1775158135U;
int var_4 = -185532764;
short var_7 = (short)21228;
short var_9 = (short)-3367;
long long int var_10 = -3891474560940916453LL;
unsigned short var_11 = (unsigned short)11992;
short var_12 = (short)20011;
short var_14 = (short)25304;
int var_15 = -1121395640;
int var_16 = 352395001;
int var_18 = 908457701;
int zero = 0;
unsigned char var_19 = (unsigned char)205;
int var_20 = 64558270;
short var_21 = (short)-28579;
long long int var_22 = -1422418181876301621LL;
signed char var_23 = (signed char)84;
unsigned int var_24 = 2767794558U;
unsigned long long int var_25 = 14572621259898996467ULL;
signed char var_26 = (signed char)-93;
signed char arr_13 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-4 : (signed char)79;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
