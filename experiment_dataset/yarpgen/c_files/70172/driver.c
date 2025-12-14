#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_4 = 3451087076U;
signed char var_5 = (signed char)27;
unsigned int var_7 = 3525876872U;
unsigned int var_8 = 1335319164U;
unsigned long long int var_18 = 11305026077404024507ULL;
int zero = 0;
int var_20 = 1971912926;
short var_21 = (short)-31569;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
