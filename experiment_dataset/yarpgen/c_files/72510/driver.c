#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -636471322694555479LL;
short var_1 = (short)22773;
long long int var_6 = -6817631547388721697LL;
int zero = 0;
short var_11 = (short)-10010;
unsigned int var_12 = 2422783284U;
long long int var_13 = 4030115572390486573LL;
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
