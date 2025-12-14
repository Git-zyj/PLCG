#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)227;
signed char var_5 = (signed char)103;
long long int var_9 = -8747818958573322068LL;
long long int var_11 = 4664581867115311592LL;
int zero = 0;
unsigned int var_12 = 4008436550U;
signed char var_13 = (signed char)-9;
void init() {
}

void checksum() {
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
