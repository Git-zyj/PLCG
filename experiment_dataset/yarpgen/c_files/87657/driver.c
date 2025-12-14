#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-22;
short var_4 = (short)4317;
signed char var_6 = (signed char)3;
unsigned short var_7 = (unsigned short)29269;
signed char var_9 = (signed char)-60;
short var_12 = (short)16643;
int zero = 0;
short var_19 = (short)32639;
short var_20 = (short)13441;
short var_21 = (short)14946;
signed char var_22 = (signed char)-76;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
