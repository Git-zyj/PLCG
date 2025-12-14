#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = 5353059017333260983LL;
short var_3 = (short)8982;
int zero = 0;
unsigned short var_11 = (unsigned short)51968;
unsigned int var_12 = 2831355467U;
int var_13 = -1542640699;
unsigned short var_14 = (unsigned short)32484;
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
