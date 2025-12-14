#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3976408372U;
signed char var_2 = (signed char)116;
short var_5 = (short)6457;
signed char var_10 = (signed char)5;
int zero = 0;
unsigned short var_13 = (unsigned short)44674;
int var_14 = -1911637480;
void init() {
}

void checksum() {
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
