#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10392138984135157997ULL;
unsigned long long int var_6 = 12698829728043895499ULL;
unsigned char var_8 = (unsigned char)66;
short var_10 = (short)24188;
int var_11 = -1585413415;
int zero = 0;
int var_14 = -1098520169;
unsigned short var_15 = (unsigned short)18974;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
