#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_6 = 6484266268629686295ULL;
short var_7 = (short)-9022;
unsigned char var_9 = (unsigned char)182;
short var_13 = (short)6823;
unsigned short var_18 = (unsigned short)21491;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 17241177676695970235ULL;
short var_22 = (short)-28088;
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
