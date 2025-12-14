#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2468512337U;
unsigned short var_6 = (unsigned short)56095;
unsigned short var_8 = (unsigned short)60315;
unsigned int var_9 = 3686321489U;
unsigned short var_10 = (unsigned short)27057;
unsigned short var_11 = (unsigned short)33589;
unsigned long long int var_14 = 10607431968019728554ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)9570;
unsigned int var_16 = 3423871961U;
unsigned long long int var_17 = 397879613317730661ULL;
unsigned long long int var_18 = 5869610260567519136ULL;
unsigned int var_19 = 2341594923U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
