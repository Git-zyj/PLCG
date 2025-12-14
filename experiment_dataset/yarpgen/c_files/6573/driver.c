#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)64;
unsigned char var_2 = (unsigned char)49;
signed char var_4 = (signed char)-9;
unsigned char var_6 = (unsigned char)167;
unsigned long long int var_7 = 2471654641732141716ULL;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)105;
short var_11 = (short)-19669;
_Bool var_13 = (_Bool)0;
int var_14 = -828086052;
int zero = 0;
unsigned int var_16 = 803889472U;
unsigned int var_17 = 3025855969U;
unsigned short var_18 = (unsigned short)30177;
short var_19 = (short)-15239;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
