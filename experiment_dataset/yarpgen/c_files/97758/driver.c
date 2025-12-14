#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26740;
short var_1 = (short)12318;
short var_2 = (short)-8283;
short var_3 = (short)24280;
short var_4 = (short)-22038;
short var_6 = (short)-31148;
short var_7 = (short)3851;
short var_8 = (short)-10153;
short var_9 = (short)5346;
int zero = 0;
short var_10 = (short)17722;
short var_11 = (short)-24630;
short var_12 = (short)-29210;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
