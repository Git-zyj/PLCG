#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
unsigned int var_2 = 1309099150U;
signed char var_6 = (signed char)-84;
unsigned char var_9 = (unsigned char)243;
unsigned int var_10 = 1189539040U;
int zero = 0;
unsigned short var_14 = (unsigned short)32619;
long long int var_15 = 4104155443694101616LL;
unsigned char var_16 = (unsigned char)219;
unsigned short var_17 = (unsigned short)51758;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
