#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)122;
unsigned long long int var_5 = 10535223622788548643ULL;
unsigned char var_7 = (unsigned char)183;
unsigned long long int var_9 = 269088123182384657ULL;
int var_11 = -957400497;
unsigned char var_13 = (unsigned char)72;
int var_14 = 808347576;
short var_15 = (short)15443;
signed char var_16 = (signed char)-28;
unsigned char var_17 = (unsigned char)27;
int zero = 0;
unsigned char var_18 = (unsigned char)95;
int var_19 = -1286424850;
unsigned char var_20 = (unsigned char)247;
unsigned long long int var_21 = 4930244591083504235ULL;
unsigned char var_22 = (unsigned char)139;
int var_23 = 380543607;
unsigned short var_24 = (unsigned short)24371;
signed char var_25 = (signed char)-30;
unsigned char var_26 = (unsigned char)119;
unsigned long long int var_27 = 6829369050257918424ULL;
unsigned char arr_0 [11] ;
unsigned short arr_1 [11] ;
unsigned char arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)26230;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)142 : (unsigned char)20;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
