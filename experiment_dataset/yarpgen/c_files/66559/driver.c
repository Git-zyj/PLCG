#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12647;
unsigned long long int var_6 = 10627170990561355314ULL;
signed char var_7 = (signed char)-79;
signed char var_9 = (signed char)105;
int zero = 0;
unsigned long long int var_10 = 8021720619589963803ULL;
unsigned short var_11 = (unsigned short)49070;
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
