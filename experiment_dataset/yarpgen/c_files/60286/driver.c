#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2719;
signed char var_1 = (signed char)25;
long long int var_7 = -9200539085610765115LL;
signed char var_8 = (signed char)119;
signed char var_18 = (signed char)5;
int zero = 0;
short var_20 = (short)-6225;
unsigned char var_21 = (unsigned char)215;
long long int var_22 = 2524658415408281011LL;
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
