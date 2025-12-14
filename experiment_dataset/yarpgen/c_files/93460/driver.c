#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2074965987U;
unsigned short var_2 = (unsigned short)47098;
short var_4 = (short)20178;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 957838816U;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 14993494125098586829ULL;
int var_13 = -1550808376;
signed char var_14 = (signed char)-102;
void init() {
}

void checksum() {
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
