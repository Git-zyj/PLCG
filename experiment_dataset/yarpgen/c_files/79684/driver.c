#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)26760;
unsigned short var_7 = (unsigned short)3305;
unsigned short var_17 = (unsigned short)50089;
int zero = 0;
unsigned short var_19 = (unsigned short)25819;
int var_20 = 614742956;
short var_21 = (short)-16412;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
