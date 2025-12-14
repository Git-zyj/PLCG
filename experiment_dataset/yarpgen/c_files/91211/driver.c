#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6218076083246980352LL;
int var_3 = -1050025137;
unsigned short var_4 = (unsigned short)25093;
signed char var_5 = (signed char)43;
long long int var_6 = 4056668102443878717LL;
unsigned long long int var_9 = 11882185162007820460ULL;
unsigned short var_11 = (unsigned short)35007;
signed char var_13 = (signed char)-97;
unsigned int var_14 = 3683227500U;
long long int var_16 = 4123340026195018966LL;
int zero = 0;
unsigned short var_20 = (unsigned short)50863;
unsigned char var_21 = (unsigned char)31;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)52575;
unsigned short var_24 = (unsigned short)32293;
_Bool arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
