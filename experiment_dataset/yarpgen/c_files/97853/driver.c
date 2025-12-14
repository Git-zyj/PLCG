#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
unsigned short var_1 = (unsigned short)26213;
signed char var_2 = (signed char)16;
int zero = 0;
unsigned long long int var_11 = 5749927855532539467ULL;
unsigned short var_12 = (unsigned short)63198;
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
