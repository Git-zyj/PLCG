#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2714410182U;
unsigned long long int var_2 = 13693808863856083081ULL;
long long int var_3 = -1470125275196372488LL;
signed char var_5 = (signed char)-44;
long long int var_6 = -758756006405473261LL;
signed char var_7 = (signed char)-10;
signed char var_10 = (signed char)-91;
int zero = 0;
int var_19 = -1812893720;
short var_20 = (short)-14894;
signed char var_21 = (signed char)-123;
unsigned int var_22 = 1496028328U;
unsigned int var_23 = 3432427971U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
