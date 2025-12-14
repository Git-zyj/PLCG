#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16397;
unsigned char var_3 = (unsigned char)124;
unsigned long long int var_8 = 1083146596825896402ULL;
int var_9 = 1834012873;
unsigned char var_13 = (unsigned char)25;
int zero = 0;
signed char var_14 = (signed char)-88;
int var_15 = 1394499375;
short var_16 = (short)4634;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
