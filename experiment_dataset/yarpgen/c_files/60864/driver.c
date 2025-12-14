#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -27703772;
short var_1 = (short)2790;
short var_3 = (short)26929;
int var_7 = 810554669;
short var_8 = (short)18893;
unsigned long long int var_13 = 15454757260933939945ULL;
int zero = 0;
unsigned long long int var_18 = 1832596025551284851ULL;
long long int var_19 = 9202587983739442969LL;
void init() {
}

void checksum() {
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
