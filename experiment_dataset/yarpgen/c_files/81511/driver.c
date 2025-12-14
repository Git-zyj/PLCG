#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1316886287;
unsigned int var_3 = 340412574U;
int var_4 = 1406559113;
_Bool var_9 = (_Bool)1;
int var_10 = 2028697736;
unsigned short var_13 = (unsigned short)17459;
unsigned char var_14 = (unsigned char)118;
signed char var_15 = (signed char)-46;
int zero = 0;
long long int var_16 = -4778947827107348646LL;
int var_17 = 471350534;
int var_18 = 265804396;
signed char var_19 = (signed char)-111;
int var_20 = 1535258497;
_Bool arr_0 [11] [11] ;
short arr_1 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)10672;
}

void checksum() {
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
