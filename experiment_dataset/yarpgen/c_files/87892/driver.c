#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5015460662929212056LL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)58;
unsigned short var_10 = (unsigned short)45169;
_Bool var_12 = (_Bool)0;
unsigned long long int var_15 = 8899538203379995439ULL;
int zero = 0;
signed char var_17 = (signed char)52;
signed char var_18 = (signed char)23;
signed char var_19 = (signed char)32;
unsigned long long int var_20 = 797011401842125076ULL;
unsigned long long int var_21 = 15499177561360328065ULL;
int var_22 = -927311648;
unsigned char var_23 = (unsigned char)132;
unsigned char var_24 = (unsigned char)66;
long long int var_25 = 1267551775517276857LL;
unsigned char arr_0 [14] ;
unsigned char arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)231;
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
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
