#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)62230;
long long int var_8 = 5556832762097240640LL;
long long int var_9 = -8402234031472566879LL;
unsigned long long int var_17 = 13348181613238315361ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2669899634U;
unsigned int var_21 = 404912272U;
signed char var_22 = (signed char)-107;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
