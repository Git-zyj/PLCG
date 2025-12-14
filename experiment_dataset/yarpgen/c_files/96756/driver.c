#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6538168600300887093ULL;
unsigned long long int var_1 = 116249139837119630ULL;
int var_2 = -1999168835;
long long int var_12 = -391114972142124003LL;
int zero = 0;
unsigned long long int var_16 = 12161002425338614608ULL;
unsigned long long int var_17 = 17251582858658868839ULL;
short var_18 = (short)-31269;
unsigned char var_19 = (unsigned char)68;
unsigned int var_20 = 3052848933U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
