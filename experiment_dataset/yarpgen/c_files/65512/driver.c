#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2980631484U;
signed char var_1 = (signed char)37;
int var_3 = 141975687;
unsigned int var_4 = 362236235U;
signed char var_5 = (signed char)-73;
long long int var_6 = 6196849174938723343LL;
signed char var_7 = (signed char)65;
short var_8 = (short)-20405;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = 1326788360;
long long int var_11 = 8186550582477823765LL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1481672218U;
unsigned short var_15 = (unsigned short)52401;
unsigned int var_16 = 3279022792U;
signed char var_17 = (signed char)-2;
unsigned int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 3314824748U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
