#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-34;
signed char var_5 = (signed char)110;
unsigned int var_6 = 3219534563U;
short var_7 = (short)21491;
signed char var_18 = (signed char)-71;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 10712984651703577963ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
