#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17300367827464307449ULL;
unsigned long long int var_2 = 4577755567051732689ULL;
signed char var_8 = (signed char)15;
unsigned int var_16 = 3334998557U;
int zero = 0;
short var_17 = (short)1167;
unsigned short var_18 = (unsigned short)11719;
int var_19 = -1746590398;
void init() {
}

void checksum() {
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
