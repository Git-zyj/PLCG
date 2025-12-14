#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3882420640364150165ULL;
unsigned short var_2 = (unsigned short)47400;
unsigned long long int var_4 = 10531488366765855551ULL;
unsigned int var_5 = 3061118226U;
unsigned int var_9 = 2506525192U;
unsigned short var_10 = (unsigned short)7535;
int zero = 0;
unsigned short var_14 = (unsigned short)17044;
unsigned short var_15 = (unsigned short)52347;
long long int var_16 = -3426983045892007987LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
