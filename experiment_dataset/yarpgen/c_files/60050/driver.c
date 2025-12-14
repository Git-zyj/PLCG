#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)93;
unsigned int var_3 = 1432027520U;
unsigned long long int var_4 = 16633357111349737444ULL;
_Bool var_7 = (_Bool)1;
int var_8 = -1419427589;
short var_10 = (short)20893;
int var_11 = 428794739;
unsigned long long int var_12 = 1824631445536480785ULL;
signed char var_13 = (signed char)-125;
int zero = 0;
unsigned char var_14 = (unsigned char)88;
unsigned long long int var_15 = 1020406939205225338ULL;
unsigned short var_16 = (unsigned short)51499;
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
