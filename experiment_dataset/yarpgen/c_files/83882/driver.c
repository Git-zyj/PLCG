#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -1306720459;
unsigned int var_3 = 3155691753U;
int var_5 = 527468434;
unsigned int var_11 = 1915386053U;
unsigned long long int var_12 = 9136502042221581354ULL;
int zero = 0;
signed char var_14 = (signed char)-112;
unsigned int var_15 = 1464630190U;
void init() {
}

void checksum() {
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
