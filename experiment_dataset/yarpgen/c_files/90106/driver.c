#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -425614580724122402LL;
long long int var_4 = -8094832295509603708LL;
unsigned short var_6 = (unsigned short)2428;
long long int var_7 = -6642438015481807201LL;
short var_8 = (short)-29817;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_17 = (short)5966;
long long int var_18 = -4325802263051211372LL;
long long int var_19 = -6324251115083426598LL;
unsigned short var_20 = (unsigned short)22360;
long long int var_21 = -5410833502316124501LL;
unsigned char arr_9 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)93 : (unsigned char)201;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
