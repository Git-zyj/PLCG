#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
signed char var_1 = (signed char)78;
long long int var_3 = -7121743125004621643LL;
short var_4 = (short)8415;
unsigned char var_5 = (unsigned char)139;
short var_6 = (short)-29821;
signed char var_7 = (signed char)19;
unsigned int var_8 = 1610287159U;
unsigned short var_9 = (unsigned short)57626;
int zero = 0;
unsigned short var_10 = (unsigned short)31273;
signed char var_11 = (signed char)-111;
unsigned long long int var_12 = 1546040261038624795ULL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 4003749469U;
int var_15 = -1653885115;
unsigned char var_16 = (unsigned char)227;
_Bool arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
