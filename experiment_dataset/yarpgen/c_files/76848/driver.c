#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -564992287;
signed char var_3 = (signed char)-117;
signed char var_13 = (signed char)109;
int var_17 = 87499838;
int zero = 0;
unsigned long long int var_19 = 10708919098331423312ULL;
unsigned long long int var_20 = 588313609308902018ULL;
short var_21 = (short)-4277;
void init() {
}

void checksum() {
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
