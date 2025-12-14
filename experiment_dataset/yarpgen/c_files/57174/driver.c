#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1711397971;
unsigned long long int var_6 = 3749047525996561196ULL;
unsigned int var_7 = 346381651U;
long long int var_9 = 6283530332719871929LL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-31;
short var_16 = (short)26506;
signed char var_18 = (signed char)93;
int zero = 0;
unsigned short var_19 = (unsigned short)15807;
int var_20 = -1368029120;
short var_21 = (short)-16546;
unsigned long long int var_22 = 9599412154876280238ULL;
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
