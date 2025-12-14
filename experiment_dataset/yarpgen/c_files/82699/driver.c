#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6707752780707963869LL;
long long int var_5 = -4466289015147348353LL;
short var_6 = (short)-15406;
_Bool var_8 = (_Bool)1;
unsigned int var_11 = 1920552219U;
unsigned char var_12 = (unsigned char)100;
unsigned int var_17 = 3684597454U;
unsigned char var_19 = (unsigned char)181;
int zero = 0;
unsigned long long int var_20 = 1115694719561947205ULL;
unsigned long long int var_21 = 15137967001465945876ULL;
unsigned long long int var_22 = 15904127612662279605ULL;
unsigned int var_23 = 4253681613U;
unsigned long long int var_24 = 532508685788667607ULL;
unsigned short arr_0 [21] ;
short arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)18849;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-23063;
}

void checksum() {
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
