#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 960119807;
signed char var_7 = (signed char)-121;
long long int var_9 = -3018215867542427257LL;
unsigned long long int var_10 = 12406035963301684853ULL;
unsigned short var_17 = (unsigned short)22855;
int zero = 0;
unsigned int var_19 = 3648553993U;
short var_20 = (short)1898;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
