#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)63;
signed char var_4 = (signed char)-82;
unsigned long long int var_5 = 4825789950016330937ULL;
unsigned short var_6 = (unsigned short)7221;
int var_8 = 1362104038;
unsigned long long int var_10 = 15772334937661869401ULL;
unsigned long long int var_11 = 8874296801147913598ULL;
unsigned int var_12 = 3824657974U;
unsigned short var_13 = (unsigned short)4174;
unsigned long long int var_15 = 6640142151972959422ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)55;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2563222443U;
unsigned long long int var_19 = 5312017778694033201ULL;
unsigned char var_20 = (unsigned char)154;
_Bool arr_6 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
