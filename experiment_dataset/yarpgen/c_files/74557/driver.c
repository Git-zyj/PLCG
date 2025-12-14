#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1101551043;
int var_4 = 272794954;
unsigned int var_9 = 1587089223U;
unsigned long long int var_11 = 6253063767487810539ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)1977;
unsigned long long int var_19 = 14223486819673929806ULL;
signed char var_20 = (signed char)-86;
unsigned short var_21 = (unsigned short)24461;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
