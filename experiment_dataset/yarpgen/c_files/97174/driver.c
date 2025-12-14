#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1953998970U;
unsigned char var_1 = (unsigned char)99;
signed char var_2 = (signed char)8;
signed char var_3 = (signed char)-48;
int var_4 = -1345394710;
unsigned short var_5 = (unsigned short)36487;
unsigned short var_6 = (unsigned short)38947;
_Bool var_7 = (_Bool)1;
int var_8 = 1844550374;
int var_9 = 929989230;
int var_10 = 1457558874;
unsigned int var_11 = 1701122224U;
unsigned short var_13 = (unsigned short)57067;
_Bool var_14 = (_Bool)1;
short var_15 = (short)19905;
int zero = 0;
unsigned long long int var_17 = 5713170278175545558ULL;
short var_18 = (short)5428;
unsigned short var_19 = (unsigned short)55211;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
