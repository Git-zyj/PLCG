#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22736;
int var_3 = -1342197390;
short var_7 = (short)163;
signed char var_9 = (signed char)-125;
int zero = 0;
long long int var_11 = 5958661426722728992LL;
int var_12 = -698481600;
int var_13 = 416963244;
unsigned short var_14 = (unsigned short)42638;
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
