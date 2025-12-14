#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16016;
signed char var_1 = (signed char)-26;
int var_2 = 1011444603;
_Bool var_3 = (_Bool)0;
int var_4 = 2079929857;
signed char var_5 = (signed char)-16;
int var_6 = 684326268;
unsigned short var_7 = (unsigned short)39866;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)9391;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)59697;
int zero = 0;
long long int var_13 = 6974757479845451679LL;
unsigned short var_14 = (unsigned short)50749;
_Bool var_15 = (_Bool)0;
long long int var_16 = -5422453182831423583LL;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-88;
_Bool arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
