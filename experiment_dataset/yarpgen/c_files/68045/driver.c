#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4215262923U;
short var_2 = (short)-31599;
unsigned char var_3 = (unsigned char)96;
long long int var_4 = 4306050841895181700LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 4194097150U;
signed char var_12 = (signed char)-120;
short var_13 = (short)-17223;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
