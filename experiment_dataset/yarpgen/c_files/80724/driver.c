#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)32;
unsigned int var_6 = 1646774801U;
unsigned long long int var_7 = 3080582148272298073ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)54190;
unsigned short var_11 = (unsigned short)23042;
signed char var_12 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
