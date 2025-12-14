#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)147;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)30033;
short var_4 = (short)5056;
unsigned int var_5 = 3922703054U;
signed char var_6 = (signed char)15;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)31160;
unsigned char var_10 = (unsigned char)41;
unsigned long long int var_12 = 17306564308283065131ULL;
int zero = 0;
unsigned long long int var_13 = 4982136443208993207ULL;
signed char var_14 = (signed char)76;
unsigned long long int var_15 = 17274966893077341289ULL;
unsigned short var_16 = (unsigned short)61165;
int var_17 = -228328754;
short var_18 = (short)-22469;
unsigned short var_19 = (unsigned short)37049;
int var_20 = -815196992;
unsigned char arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)176 : (unsigned char)240;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
