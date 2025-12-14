#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10596708477826704846ULL;
int var_4 = -406946354;
unsigned long long int var_5 = 6169281189108214866ULL;
long long int var_7 = 1937683179550793884LL;
short var_9 = (short)27395;
short var_10 = (short)-27465;
int zero = 0;
long long int var_12 = 7766836725964073570LL;
signed char var_13 = (signed char)-46;
short var_14 = (short)-30229;
long long int var_15 = 3678602337558602032LL;
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
