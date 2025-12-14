#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11628;
unsigned long long int var_2 = 16930237603040722434ULL;
int var_6 = 2058192376;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_13 = -8087036277831652786LL;
int var_14 = -295377120;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
