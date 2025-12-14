#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)193;
unsigned int var_2 = 3629969302U;
signed char var_3 = (signed char)9;
int var_4 = 405414524;
long long int var_6 = -6854657978650366315LL;
short var_8 = (short)21770;
int zero = 0;
short var_11 = (short)6482;
short var_12 = (short)-1736;
int var_13 = -870833581;
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
