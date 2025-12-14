#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)20;
unsigned short var_2 = (unsigned short)20365;
unsigned char var_3 = (unsigned char)82;
short var_4 = (short)-9760;
short var_9 = (short)-27685;
int zero = 0;
int var_10 = 1113825830;
unsigned short var_11 = (unsigned short)38355;
signed char var_12 = (signed char)127;
short var_13 = (short)12007;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
