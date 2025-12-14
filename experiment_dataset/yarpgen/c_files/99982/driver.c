#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3194107684U;
int var_5 = 878244608;
unsigned short var_6 = (unsigned short)16336;
unsigned short var_11 = (unsigned short)25351;
int var_13 = 1448523933;
int zero = 0;
unsigned long long int var_18 = 2999249746397277529ULL;
short var_19 = (short)21359;
short var_20 = (short)-23137;
short var_21 = (short)16593;
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
