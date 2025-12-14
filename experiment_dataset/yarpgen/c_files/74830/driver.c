#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)119;
unsigned char var_2 = (unsigned char)244;
unsigned int var_3 = 3621044353U;
short var_10 = (short)13220;
signed char var_14 = (signed char)109;
unsigned char var_17 = (unsigned char)21;
int zero = 0;
short var_19 = (short)12004;
unsigned int var_20 = 3066670014U;
int var_21 = -1257612703;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
