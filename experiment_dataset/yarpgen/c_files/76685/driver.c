#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)188;
unsigned long long int var_4 = 1348474821262645880ULL;
unsigned int var_5 = 2730248721U;
unsigned char var_6 = (unsigned char)168;
unsigned short var_9 = (unsigned short)14766;
unsigned char var_10 = (unsigned char)168;
unsigned short var_12 = (unsigned short)8613;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 198611681U;
unsigned short var_18 = (unsigned short)23550;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)29606;
unsigned long long int var_21 = 3473987033499099939ULL;
unsigned char var_22 = (unsigned char)246;
unsigned long long int var_23 = 5779174720297423416ULL;
_Bool var_24 = (_Bool)1;
unsigned char arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)148 : (unsigned char)209;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
