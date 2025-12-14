#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 771820461259919112ULL;
long long int var_8 = 1007500385033780895LL;
int var_9 = 1878178991;
short var_12 = (short)-53;
int zero = 0;
signed char var_13 = (signed char)-106;
unsigned long long int var_14 = 6885943585768981840ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
