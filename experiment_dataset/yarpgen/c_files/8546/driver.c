#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13170508291093266828ULL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 7256809400893917121ULL;
unsigned int var_5 = 2952591717U;
unsigned long long int var_6 = 12360507699661489562ULL;
short var_9 = (short)6022;
int zero = 0;
unsigned long long int var_11 = 212185270922583247ULL;
signed char var_12 = (signed char)121;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
