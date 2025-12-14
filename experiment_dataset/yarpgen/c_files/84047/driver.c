#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3604617003U;
unsigned char var_5 = (unsigned char)17;
unsigned short var_12 = (unsigned short)11833;
int zero = 0;
unsigned int var_14 = 2749120488U;
unsigned char var_15 = (unsigned char)208;
long long int var_16 = -8889569827826677694LL;
unsigned long long int var_17 = 3644839572801698798ULL;
int var_18 = -1961315864;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
