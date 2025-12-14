#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1390573521550541664ULL;
unsigned short var_9 = (unsigned short)9090;
int var_14 = -402362499;
unsigned long long int var_17 = 1781649293872238993ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)61904;
short var_19 = (short)-26908;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
