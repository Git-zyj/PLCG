#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8847334188302645442LL;
unsigned short var_16 = (unsigned short)31189;
int zero = 0;
unsigned long long int var_19 = 11246810821131552317ULL;
long long int var_20 = -4970130011815257545LL;
signed char var_21 = (signed char)-84;
long long int var_22 = 2985096770827259094LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
