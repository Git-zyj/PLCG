#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)139;
int var_4 = -307661782;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)0;
short var_14 = (short)-27264;
int zero = 0;
long long int var_17 = 8859341196561093884LL;
unsigned long long int var_18 = 2501433553134082119ULL;
unsigned int var_19 = 1542938190U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
