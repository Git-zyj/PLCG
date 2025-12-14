#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1994806045;
long long int var_3 = -114140473033653728LL;
long long int var_9 = -4972373098615956096LL;
unsigned long long int var_11 = 5850354330796694489ULL;
signed char var_14 = (signed char)77;
int zero = 0;
long long int var_17 = -8416131648660972855LL;
unsigned short var_18 = (unsigned short)5206;
short var_19 = (short)7306;
short var_20 = (short)26826;
unsigned int var_21 = 4025142256U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
