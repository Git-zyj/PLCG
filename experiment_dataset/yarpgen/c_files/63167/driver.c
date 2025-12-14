#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
short var_3 = (short)10083;
short var_6 = (short)-26906;
unsigned short var_7 = (unsigned short)61963;
unsigned short var_10 = (unsigned short)29615;
int zero = 0;
short var_11 = (short)-14548;
signed char var_12 = (signed char)83;
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
