#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7940277541540574124ULL;
long long int var_5 = 5485701081032632926LL;
signed char var_10 = (signed char)-4;
short var_11 = (short)-20451;
unsigned char var_12 = (unsigned char)152;
unsigned char var_14 = (unsigned char)222;
short var_15 = (short)-16497;
int zero = 0;
long long int var_16 = 983243377794319374LL;
short var_17 = (short)-26030;
unsigned int var_18 = 2098775653U;
short var_19 = (short)14273;
short arr_0 [25] [25] ;
unsigned long long int arr_5 [25] [25] ;
signed char arr_7 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-286;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 6114425758334771302ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-36;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
