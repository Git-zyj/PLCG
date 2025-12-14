#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
unsigned int var_2 = 923129954U;
short var_4 = (short)-3075;
short var_5 = (short)-6506;
long long int var_6 = 39987882425151664LL;
unsigned short var_7 = (unsigned short)58222;
int zero = 0;
unsigned short var_11 = (unsigned short)25539;
signed char var_12 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
