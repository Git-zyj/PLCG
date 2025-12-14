#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3426871830293217503LL;
short var_11 = (short)-17;
unsigned int var_14 = 2456893601U;
long long int var_15 = -8978761357499402870LL;
unsigned int var_17 = 401186424U;
int zero = 0;
long long int var_18 = -1912339080005615222LL;
unsigned short var_19 = (unsigned short)29095;
unsigned long long int var_20 = 13511509429112027101ULL;
int var_21 = -908330699;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
