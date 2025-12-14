#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)32;
signed char var_6 = (signed char)-41;
unsigned long long int var_8 = 259825837336126542ULL;
unsigned int var_11 = 1809600393U;
_Bool var_12 = (_Bool)0;
int var_14 = -93451218;
int zero = 0;
short var_16 = (short)32079;
int var_17 = 2106080630;
int var_18 = -1507367097;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
