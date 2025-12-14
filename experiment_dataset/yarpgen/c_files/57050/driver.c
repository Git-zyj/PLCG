#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2377988676U;
unsigned short var_2 = (unsigned short)28860;
unsigned int var_4 = 3959598682U;
int zero = 0;
unsigned char var_16 = (unsigned char)80;
unsigned long long int var_17 = 1741308503447823357ULL;
int var_18 = -383425052;
void init() {
}

void checksum() {
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
