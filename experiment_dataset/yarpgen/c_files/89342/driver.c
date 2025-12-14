#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3868264070U;
unsigned int var_1 = 1011809218U;
unsigned short var_2 = (unsigned short)43106;
int var_3 = -2093431470;
unsigned long long int var_4 = 16809524736354959244ULL;
unsigned int var_5 = 4128774551U;
unsigned int var_8 = 1244379761U;
unsigned long long int var_9 = 15407686982390486755ULL;
unsigned long long int var_13 = 13933679534443081123ULL;
int var_15 = -2125451004;
unsigned short var_16 = (unsigned short)21091;
unsigned int var_17 = 1184259952U;
unsigned int var_18 = 2207822705U;
unsigned int var_19 = 3847096733U;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = -715002524647995757LL;
signed char var_22 = (signed char)-12;
unsigned int var_23 = 1068649118U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
