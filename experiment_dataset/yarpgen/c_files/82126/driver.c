#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16317598839414819610ULL;
int var_2 = -1392290501;
signed char var_3 = (signed char)-88;
long long int var_5 = -111099145904824633LL;
signed char var_6 = (signed char)113;
unsigned int var_7 = 4108200718U;
unsigned short var_9 = (unsigned short)54862;
unsigned short var_11 = (unsigned short)60116;
unsigned char var_13 = (unsigned char)196;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)77;
int var_17 = 1734548742;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
