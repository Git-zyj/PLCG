#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5451246203863403391ULL;
_Bool var_2 = (_Bool)1;
int var_3 = 1592825618;
int var_7 = -22584539;
unsigned char var_8 = (unsigned char)133;
unsigned int var_10 = 3925151877U;
int zero = 0;
int var_11 = 1791502221;
_Bool var_12 = (_Bool)0;
int var_13 = 1631487948;
signed char var_14 = (signed char)6;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
