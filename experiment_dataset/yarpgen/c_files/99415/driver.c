#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2391403312U;
int var_6 = 1345162737;
signed char var_12 = (signed char)-43;
int var_14 = -973549207;
unsigned int var_16 = 4248205616U;
unsigned short var_18 = (unsigned short)59924;
int zero = 0;
unsigned int var_20 = 2106874242U;
signed char var_21 = (signed char)-77;
short var_22 = (short)22902;
void init() {
}

void checksum() {
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
