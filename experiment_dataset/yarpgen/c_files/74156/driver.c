#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2014531501;
int var_3 = -839175409;
long long int var_7 = -3970414822630031425LL;
short var_8 = (short)31937;
int var_11 = 470181232;
unsigned long long int var_14 = 2360081622346028235ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)56407;
unsigned int var_20 = 2289327976U;
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
