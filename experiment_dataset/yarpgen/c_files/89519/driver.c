#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-96;
short var_3 = (short)11275;
_Bool var_7 = (_Bool)1;
short var_8 = (short)15947;
unsigned char var_9 = (unsigned char)141;
unsigned short var_10 = (unsigned short)29183;
unsigned int var_12 = 2550270969U;
signed char var_13 = (signed char)-58;
int zero = 0;
signed char var_14 = (signed char)47;
unsigned char var_15 = (unsigned char)221;
short var_16 = (short)-28193;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
