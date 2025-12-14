#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14162907226615012981ULL;
int var_1 = -1180579427;
unsigned long long int var_4 = 12062952817640185109ULL;
short var_9 = (short)26558;
signed char var_11 = (signed char)81;
unsigned long long int var_12 = 13391615873060545861ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)45966;
unsigned short var_14 = (unsigned short)3145;
unsigned short var_15 = (unsigned short)22125;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
