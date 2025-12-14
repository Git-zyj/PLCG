#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)194;
signed char var_7 = (signed char)-65;
short var_13 = (short)5106;
unsigned short var_17 = (unsigned short)35921;
int zero = 0;
unsigned char var_18 = (unsigned char)56;
signed char var_19 = (signed char)114;
signed char var_20 = (signed char)-113;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
long long int var_23 = 2683328165422822875LL;
_Bool var_24 = (_Bool)0;
short var_25 = (short)31931;
long long int arr_10 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 7406964595554649730LL : 448280561415679943LL;
}

void checksum() {
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
