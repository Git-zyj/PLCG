#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1877717673U;
unsigned long long int var_8 = 7939694313498187797ULL;
signed char var_10 = (signed char)-39;
int zero = 0;
unsigned short var_20 = (unsigned short)10964;
unsigned int var_21 = 3897777323U;
signed char var_22 = (signed char)46;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
