#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)8654;
signed char var_3 = (signed char)-112;
unsigned short var_8 = (unsigned short)63101;
short var_10 = (short)29156;
int zero = 0;
int var_11 = -1194235779;
unsigned short var_12 = (unsigned short)18241;
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
