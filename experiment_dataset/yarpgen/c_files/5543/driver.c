#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)86;
int var_9 = 1593116544;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-24613;
int zero = 0;
unsigned int var_19 = 1956711345U;
signed char var_20 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
