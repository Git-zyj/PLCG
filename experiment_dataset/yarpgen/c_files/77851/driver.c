#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6040;
_Bool var_1 = (_Bool)1;
long long int var_2 = 832404754383015627LL;
unsigned long long int var_3 = 13415373124064139577ULL;
signed char var_7 = (signed char)113;
unsigned long long int var_8 = 6318200117031527662ULL;
unsigned short var_9 = (unsigned short)51351;
unsigned long long int var_10 = 9159553757554757256ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)17602;
int var_12 = -102598821;
int var_13 = 804554216;
unsigned short var_14 = (unsigned short)7847;
unsigned char var_15 = (unsigned char)31;
unsigned char arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)85 : (unsigned char)88;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
