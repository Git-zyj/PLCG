#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1049327277;
unsigned char var_1 = (unsigned char)234;
signed char var_4 = (signed char)-97;
signed char var_5 = (signed char)40;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -1835644647;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
