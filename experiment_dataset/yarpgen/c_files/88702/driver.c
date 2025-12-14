#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-21;
int var_2 = -1117608656;
unsigned short var_4 = (unsigned short)59664;
short var_5 = (short)-1313;
signed char var_8 = (signed char)-49;
int zero = 0;
signed char var_12 = (signed char)-81;
unsigned long long int var_13 = 5598395043027640202ULL;
signed char var_14 = (signed char)51;
_Bool var_15 = (_Bool)0;
int var_16 = -191039815;
unsigned long long int arr_0 [23] ;
short arr_2 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 16643860967030002303ULL : 13602639087234176456ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)29494 : (short)-22954;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
