#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -175696613073746623LL;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)186;
_Bool var_5 = (_Bool)0;
short var_6 = (short)26400;
unsigned long long int var_7 = 17995413300543523946ULL;
_Bool var_9 = (_Bool)1;
short var_10 = (short)18410;
int zero = 0;
unsigned int var_11 = 1076865851U;
signed char var_12 = (signed char)-34;
short var_13 = (short)25489;
unsigned char var_14 = (unsigned char)174;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)2929;
unsigned char var_17 = (unsigned char)65;
long long int var_18 = -8201216001085610011LL;
short arr_0 [19] ;
short arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)19525 : (short)-24031;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)4935;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
