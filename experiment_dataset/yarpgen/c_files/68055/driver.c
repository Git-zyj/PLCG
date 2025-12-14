#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1284012952U;
unsigned int var_1 = 991435381U;
unsigned char var_3 = (unsigned char)101;
unsigned short var_4 = (unsigned short)37409;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)37;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)14991;
int zero = 0;
unsigned int var_10 = 2613031883U;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
short var_13 = (short)5146;
signed char var_14 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
