#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)147;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)96;
int var_7 = -880164900;
unsigned char var_8 = (unsigned char)97;
int zero = 0;
signed char var_11 = (signed char)-106;
_Bool var_12 = (_Bool)1;
short var_13 = (short)21810;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
