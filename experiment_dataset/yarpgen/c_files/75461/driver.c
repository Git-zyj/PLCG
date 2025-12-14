#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50714;
unsigned int var_1 = 4059420561U;
unsigned short var_2 = (unsigned short)25679;
unsigned short var_10 = (unsigned short)43182;
int zero = 0;
unsigned short var_17 = (unsigned short)1319;
int var_18 = 129595609;
signed char var_19 = (signed char)-98;
unsigned int var_20 = 1329771891U;
void init() {
}

void checksum() {
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
