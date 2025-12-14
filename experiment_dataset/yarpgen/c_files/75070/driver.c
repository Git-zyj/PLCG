#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)169;
unsigned long long int var_3 = 11648144955778796925ULL;
signed char var_5 = (signed char)21;
int var_6 = -387023459;
int var_7 = 820254900;
unsigned short var_8 = (unsigned short)17921;
signed char var_10 = (signed char)-21;
signed char var_11 = (signed char)110;
int var_12 = -1899331610;
int zero = 0;
unsigned int var_13 = 4085776279U;
unsigned long long int var_14 = 18275600261816692674ULL;
long long int var_15 = -844218735703444513LL;
short var_16 = (short)-14123;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
