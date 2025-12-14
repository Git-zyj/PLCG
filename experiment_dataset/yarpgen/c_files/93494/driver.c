#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5276998374698897538ULL;
short var_5 = (short)-26691;
signed char var_6 = (signed char)77;
unsigned long long int var_7 = 18156944901643254007ULL;
long long int var_9 = 850280880436573563LL;
int zero = 0;
signed char var_11 = (signed char)-120;
unsigned short var_12 = (unsigned short)3384;
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
