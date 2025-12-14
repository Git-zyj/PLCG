#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18296560782495914428ULL;
signed char var_2 = (signed char)102;
_Bool var_5 = (_Bool)1;
int var_6 = -1408618204;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 1488941139U;
unsigned long long int var_11 = 13540312480897964552ULL;
unsigned long long int var_12 = 12602294818664710660ULL;
int zero = 0;
long long int var_14 = 3651538202835516630LL;
unsigned long long int var_15 = 3650643079771010987ULL;
signed char var_16 = (signed char)75;
signed char var_17 = (signed char)-96;
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
