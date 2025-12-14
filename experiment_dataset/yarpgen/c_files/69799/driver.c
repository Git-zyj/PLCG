#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4322495439198900745LL;
unsigned short var_3 = (unsigned short)37266;
long long int var_9 = 4331856798120829764LL;
long long int var_11 = 2665778855093925953LL;
int zero = 0;
unsigned short var_13 = (unsigned short)45874;
unsigned long long int var_14 = 13199759629032370824ULL;
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
