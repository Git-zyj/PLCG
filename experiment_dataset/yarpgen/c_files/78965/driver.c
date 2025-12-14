#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9056715997756188378ULL;
short var_1 = (short)-19823;
unsigned long long int var_5 = 6293161674289877681ULL;
long long int var_8 = -509572916271017822LL;
short var_9 = (short)7253;
int zero = 0;
short var_10 = (short)-14939;
int var_11 = 1267662560;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
