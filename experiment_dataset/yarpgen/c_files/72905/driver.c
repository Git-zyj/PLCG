#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -856164427;
signed char var_1 = (signed char)-108;
int var_2 = -644177317;
unsigned long long int var_3 = 6525897806844950664ULL;
unsigned long long int var_5 = 3691910803530978470ULL;
long long int var_9 = -5838999893972884338LL;
unsigned int var_10 = 1246764226U;
signed char var_11 = (signed char)-120;
int zero = 0;
unsigned int var_12 = 1977997918U;
unsigned short var_13 = (unsigned short)14338;
unsigned long long int var_14 = 8242652408270971258ULL;
unsigned long long int var_15 = 13166652278391328926ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
