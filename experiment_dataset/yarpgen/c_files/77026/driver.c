#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -174373496342011575LL;
short var_7 = (short)-3171;
long long int var_11 = -396810302446395025LL;
int var_13 = -1065445007;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 13394541828118465578ULL;
short var_16 = (short)-14809;
unsigned long long int var_17 = 3111330035001048878ULL;
unsigned short var_18 = (unsigned short)19110;
short var_19 = (short)5204;
unsigned long long int var_20 = 18420690897433660812ULL;
unsigned char var_21 = (unsigned char)192;
short arr_0 [20] ;
unsigned char arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)28197 : (short)27793;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)8 : (unsigned char)29;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
