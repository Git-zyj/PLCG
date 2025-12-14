#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 4054499436U;
signed char var_14 = (signed char)-92;
unsigned short var_15 = (unsigned short)31988;
short var_17 = (short)22570;
int zero = 0;
signed char var_18 = (signed char)34;
unsigned int var_19 = 1950588559U;
unsigned int var_20 = 4255357517U;
long long int var_21 = 6386564356544501878LL;
signed char var_22 = (signed char)6;
long long int arr_7 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -5752824737215883559LL : -2919316016560470621LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
