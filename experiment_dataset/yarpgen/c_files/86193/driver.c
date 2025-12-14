#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1261493921;
_Bool var_1 = (_Bool)0;
short var_2 = (short)29497;
unsigned int var_3 = 3165526933U;
unsigned long long int var_4 = 2389547554077122281ULL;
unsigned short var_5 = (unsigned short)41338;
int var_6 = 308880235;
_Bool var_7 = (_Bool)0;
long long int var_8 = -1579150334388274695LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)70;
unsigned char var_11 = (unsigned char)168;
int var_12 = -107202219;
int var_13 = -1148146028;
unsigned long long int var_14 = 5779211848112319830ULL;
signed char var_15 = (signed char)17;
short arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)536;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
