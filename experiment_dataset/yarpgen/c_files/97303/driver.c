#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13501092739771467399ULL;
signed char var_3 = (signed char)100;
long long int var_5 = 8291879978874516258LL;
unsigned long long int var_8 = 10196820277232149634ULL;
short var_10 = (short)-24099;
signed char var_13 = (signed char)25;
unsigned char var_14 = (unsigned char)83;
int zero = 0;
signed char var_15 = (signed char)-80;
int var_16 = -1683730355;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
