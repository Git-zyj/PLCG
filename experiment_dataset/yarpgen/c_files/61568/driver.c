#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)101;
unsigned short var_5 = (unsigned short)57155;
long long int var_11 = -6512141044705063772LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_17 = -1172537916;
unsigned long long int var_18 = 6383655306358255636ULL;
short var_19 = (short)29768;
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
